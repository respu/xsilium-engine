#include "JeuxState.h"

using namespace Ogre;

JeuxState::JeuxState()
:    m_Loader(0),
     m_TerrainImported(true),
     m_SceneFile(Ogre::StringUtil::BLANK),
//   m_HelpInfo(Ogre::StringUtil::BLANK),
     m_Fly(false),
     m_FallVelocity(0)
{
    m_MoveSpeed			= 0.1f;
    m_RotateSpeed		= 0.3f;

    m_bQuit             = false;
    m_bSettingsMode     = false;

    inputManager = InputManager::getSingletonPtr();

    mCamNames.clear();

//    m_HelpInfo = Ogre::String("Use [W][A][S][D] keys for movement.\nKeys [1]-[9] to switch between cameras.\n[0] toggles SceneNode debug visuals.\n\nPress [C] to toggle clamp to terrain (gravity).\n\n[G] toggles the detail panel.\n[R] cycles polygonModes (Solid/Wireframe/Points).\n[T] cycles various filtering.\n\n\nPress [ESC] to quit.");

}

JeuxState::~JeuxState(void)
{
	delete m_Loader;
}

void JeuxState::enter()
{
    using namespace CEGUI;

    inputManager->addKeyListener(this,"Game");

    XsiliumFramework::getInstance()->m_pLog->logMessage("Entering JeuxState...");

    CEGUI::WindowManager& winMgr(CEGUI::WindowManager::getSingleton());

    CEGUI::Window* parent = winMgr.createWindow("DefaultWindow", "CEGUIApp/Console");

    CEGUI::Window* d_root = winMgr.loadLayoutFromFile("XsiliumConsole.layout");

    Console * d_console = new Console(d_root);

    // we will destroy the console box windows ourselves
    d_root->setDestroyedByParent(false);

        // Do events wire-up
    d_root->subscribeEvent(CEGUI::Window::EventKeyDown, Event::Subscriber(&Console::handleKeyDown, d_console));

    d_root->getChild("Console/Button")->
            subscribeEvent(PushButton::EventClicked, Event::Subscriber(&Console::handleSubmit, d_console));

    d_root->getChild("Console/Editbox")->
            subscribeEvent(Editbox::EventTextAccepted, Event::Subscriber(&Console::handleSubmit, d_console));

        // attach this window if parent is valid
    parent->addChild(d_root);


    m_pSceneMgr = XsiliumFramework::getInstance()->m_pRoot->createSceneManager(ST_GENERIC, "GameSceneMgr");
    m_pSceneMgr->setAmbientLight(Ogre::ColourValue(0.7f, 0.7f, 0.7f));

    m_pRSQ = m_pSceneMgr->createRayQuery(Ray());
//    m_pRSQ->setQueryMask(OGRE_HEAD_MASK);

    m_pCamera = m_pSceneMgr->createCamera("GameCamera");
    m_pCamera->setPosition(Ogre::Vector3(5, 60, 60));
    m_pCamera->lookAt(Ogre::Vector3(5, 20, 0));
    m_pCamera->setNearClipDistance(5);

    m_pCamera->setAspectRatio(Real(XsiliumFramework::getInstance()->m_pViewport->getActualWidth()) /
        Real(XsiliumFramework::getInstance()->m_pViewport->getActualHeight()));

    XsiliumFramework::getInstance()->m_pViewport->setCamera(m_pCamera);
    m_pCurrentObject = 0;

//    buildGUI();

    CEGUI::System::getSingleton().getDefaultGUIContext().setRootWindow(d_root);

    createScene();
}


bool JeuxState::pause()
{
    XsiliumFramework::getInstance()->m_pLog->logMessage("Pausing JeuxState...");

    return true;
}


void JeuxState::resume()
{
    XsiliumFramework::getInstance()->m_pLog->logMessage("Resuming JeuxState...");

//    buildGUI();

    XsiliumFramework::getInstance()->m_pViewport->setCamera(m_pCamera);
    m_bQuit = false;
}

void JeuxState::exit()
{
    XsiliumFramework::getInstance()->m_pLog->logMessage("Leaving JeuxState...");

    m_pSceneMgr->destroyCamera(m_pCamera);
    m_pSceneMgr->destroyQuery(m_pRSQ);
    if(m_pSceneMgr)
        XsiliumFramework::getInstance()->m_pRoot->destroySceneManager(m_pSceneMgr);

    inputManager->removeKeyListener(this);
}

void JeuxState::createScene()
{
}

void JeuxState::moveCamera()
{

}

void JeuxState::getInput()
{

}

void JeuxState::update(double timeSinceLastFrame)
{
    m_FrameEvent.timeSinceLastFrame = timeSinceLastFrame;
//    XsiliumFramework::getInstance()->m_pTrayMgr->frameRenderingQueued(m_FrameEvent);

    CEGUI::System& gui_system(CEGUI::System::getSingleton());

    gui_system.injectTimePulse(timeSinceLastFrame);
    gui_system.getDefaultGUIContext().injectTimePulse(timeSinceLastFrame);

    if(m_bQuit == true)
    {
        popGameState();
        return;
    }

//    if(!XsiliumFramework::getInstance()->m_pTrayMgr->isDialogVisible())
    {

		/*
		if(m_pDetailsPanel->isVisible())
        {
            m_pDetailsPanel->setParamValue(0, Ogre::StringConverter::toString(m_pCamera->getDerivedPosition().x));
            m_pDetailsPanel->setParamValue(1, Ogre::StringConverter::toString(m_pCamera->getDerivedPosition().y));
            m_pDetailsPanel->setParamValue(2, Ogre::StringConverter::toString(m_pCamera->getDerivedPosition().z));
            m_pDetailsPanel->setParamValue(3, Ogre::StringConverter::toString(m_pCamera->getDerivedOrientation().w));
            m_pDetailsPanel->setParamValue(4, Ogre::StringConverter::toString(m_pCamera->getDerivedOrientation().x));
            m_pDetailsPanel->setParamValue(5, Ogre::StringConverter::toString(m_pCamera->getDerivedOrientation().y));
            m_pDetailsPanel->setParamValue(6, Ogre::StringConverter::toString(m_pCamera->getDerivedOrientation().z));
            if(m_bSettingsMode)
                m_pDetailsPanel->setParamValue(7, "Buffered Input");
            else
                m_pDetailsPanel->setParamValue(7, "Un-Buffered Input");
        }
		*/
    }

    m_MoveScale = m_MoveSpeed   * timeSinceLastFrame;
    m_RotScale  = m_RotateSpeed * timeSinceLastFrame;

    m_TranslateVector = Vector3::ZERO;

    getInput();
    moveCamera();
}

bool JeuxState::keyPressed(const OIS::KeyEvent &keyEventRef)
{
	switch(keyEventRef.key)
	{
	case OIS::KC_ESCAPE:
		m_bQuit = true;

		break;
	default:
		break;
	}

    return true;
}
bool JeuxState::keyReleased(const OIS::KeyEvent &keyEventRef)
{
	return true;
}

