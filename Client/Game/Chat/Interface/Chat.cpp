#include "Chat.h"
//Chat class


Chat::Chat() :
d_historyPos(0)
{

	eventManager = new EventManager();

	CEGUI::WindowManager& winMgr(CEGUI::WindowManager::getSingleton());

	parent = CEGUI::System::getSingleton().getDefaultGUIContext().getRootWindow();

	d_root = winMgr.loadLayoutFromFile("Console.layout");

	// we will destroy the console box windows ourselves
	d_root->setDestroyedByParent(false);

	gestionnaireChat = new GestionnaireChat(this);

	// Do events wire-up
	parent->subscribeEvent(CEGUI::Window::EventKeyDown, CEGUI::Event::Subscriber(&Chat::handleKeyDown, this));

	d_root->getChild("Editbox")->
			subscribeEvent(CEGUI::Editbox::EventTextAccepted, CEGUI::Event::Subscriber(&Chat::handleSubmit, this));

	parent->subscribeEvent(CEGUI::Window::EventMouseButtonDown, CEGUI::Event::Subscriber(&Chat::handleMouse, this));

	// attach this window if parent is valid
	parent->addChild(d_root);

	parent->activate();

}

Chat::~Chat()
{
	delete gestionnaireChat;
	delete eventManager;
	if(d_root)
	{
		CEGUI::WindowManager::getSingleton().destroyWindow(d_root);
		d_root->destroy();
	}
}

bool Chat::setMessage(const char * message)
{
	std::string message_str(message);
	Event event;
	event.setProperty("eventType",ToString(ALL));
	event.setProperty("message",message_str);
	eventManager->addEvent(event);
	return true;

}
void Chat::processMessage(Event * event)
{
	using namespace CEGUI;

	const char * message = event->getProperty("message").c_str() ;

	String messageChat(message);

	// add this entry to the command history buffer
	d_history.push_back(messageChat);
	// reset history position
	d_historyPos = d_history.size();
	// append newline to this entry
	message += '\n';
	// get history window
	MultiLineEditbox* history = static_cast<MultiLineEditbox*>(d_root->getChild("ListOfMessage"));
	// append new text to history output
	history->setText(history->getText() + messageChat);
	// scroll to bottom of history output
	history->setCaretIndex(static_cast<size_t>(-1));

}

bool Chat::handleSubmit(const CEGUI::EventArgs&)
{
	using namespace CEGUI;

	// get the text entry editbox
	Editbox* editbox = static_cast<Editbox*>(d_root->getChild("Editbox"));
	// get text out of the editbox
	CEGUI::String edit_text(editbox->getText());

	// if the string is not empty
	if (!edit_text.empty())
	{
		gestionnaireChat->sendMessageToChat(edit_text.c_str(),0);
		// erase text in text entry box.
		editbox->setText("");
	}
	isActived = false;
	editbox->deactivate();

	return true;
}

bool Chat::handleKeyDown(const CEGUI::EventArgs& args)
{
	using namespace CEGUI;

	// get the text entry editbox
	Editbox* editbox = static_cast<Editbox*>(d_root->getChild("Editbox"));

	switch (static_cast<const KeyEventArgs&>(args).scancode)
	{
	case Key::ArrowUp:
		d_historyPos = ceguimax(d_historyPos - 1, -1);
		if (d_historyPos >= 0)
		{
			editbox->setText(d_history[d_historyPos]);
			editbox->setCaretIndex(static_cast<size_t>(-1));
		}
		else
		{
			editbox->setText("");
		}

		editbox->activate();
		break;

	case Key::ArrowDown:
		d_historyPos = ceguimin(d_historyPos + 1, static_cast<int>(d_history.size()));
		if (d_historyPos < static_cast<int>(d_history.size()))
		{
			editbox->setText(d_history[d_historyPos]);
			editbox->setCaretIndex(static_cast<size_t>(-1));
		}
		else
		{
			editbox->setText("");
		}

		editbox->activate();
		break;
	case Key::Return:
		if(!editbox->isActive())
		{
			editbox->activate();
			isActived = true;
		}
	default:
		return false;
	}

	return true;
}

bool Chat::handleMouse(const CEGUI::EventArgs& args)
{
	CEGUI::Editbox* editbox = static_cast<CEGUI::Editbox*>(d_root->getChild("Editbox"));

	isActived = false;
	editbox->deactivate();

	return true;
}


void Chat::update()
{
	Event * event = eventManager->getEvent();

	if(event != NULL)
	{
		processMessage(event);
		eventManager->removeEvent();
	}
}
