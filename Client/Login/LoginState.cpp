#include "LoginState.h"


using namespace Ogre;

LoginState::LoginState()
{
	m_bQuit         = false;
	inputManager = InputManager::getSingletonPtr();
	m_FrameEvent    = Ogre::FrameEvent();
	guiInterface = new GuiInterface();
}

void LoginState::enter()
{
	XsiliumFramework::getInstance()->getLog()->logMessage("Entering LoginState...");

	inputManager->addKeyListener(this,"Login");

	m_pSceneMgr = XsiliumFramework::getInstance()->getRoot()->createSceneManager(ST_GENERIC, "LoginSceneMgr");
	m_pSceneMgr->setAmbientLight(Ogre::ColourValue(0.7f, 0.7f, 0.7f));

	m_pCamera = m_pSceneMgr->createCamera("MenuCam");
	m_pCamera->setPosition(Vector3(0, 50, 100));
	m_pCamera->lookAt(Vector3(0, 0, 0));
	m_pCamera->setNearClipDistance(1);


	m_pCamera->setAspectRatio(Real(XsiliumFramework::getInstance()->getRenderWindow()->getViewport(0)->getActualWidth()) /
			Real(XsiliumFramework::getInstance()->getRenderWindow()->getViewport(0)->getActualHeight()));

	XsiliumFramework::getInstance()->getRenderWindow()->getViewport(0)->setCamera(m_pCamera);

	buildGUI();
	createScene();

	initialisationNetwork();

}

void LoginState::createScene()
{
	ParticleSystem* ps;
	ps = m_pSceneMgr->createParticleSystem("Nimbus", "Xsilium/GreenyNimbus");
	m_pSceneMgr->getRootSceneNode()->attachObject(ps);
}

void LoginState::buildGUI()
{
	guiInterface->initialisationInterface();
	guiInterface->interfacePrincipal();
	auth = new Authentification();
}

void LoginState::exit()
{
	XsiliumFramework::getInstance()->getLog()->logMessage("Leaving LoginState...");

	m_pSceneMgr->destroyCamera(m_pCamera);

	inputManager->removeKeyListener(this);

	guiInterface->deleteInterfacePrincipal();


	if(m_pSceneMgr)
		XsiliumFramework::getInstance()->getRoot()->destroySceneManager(m_pSceneMgr);
	XsiliumFramework::getInstance()->getLog()->logMessage("destruction scene...");

	delete auth;
	delete guiInterface;

	NetworkManager::getInstance()->disconnexion();
}

bool LoginState::keyPressed(const OIS::KeyEvent &keyEventRef)
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
bool LoginState::keyReleased(const OIS::KeyEvent &keyEventRef)
{
	return true;
}

void LoginState::initialisationNetwork()
{
	NetworkManager * networkManager = NetworkManager::getInstance();
	if (!networkManager->isConnected())
	{
		int messageErreur = networkManager->connexionToHost("85.25.251.97",60000);
		if( messageErreur == 1)
		{
			XsiliumFramework::getInstance()->getLog()->logMessage("erreur de connexion : Le serveur est plein desoler ");
			auth->setEvent("0","Le serveur est plein desoler");
		}
		if( messageErreur == 2)
		{
			XsiliumFramework::getInstance()->getLog()->logMessage("erreur de connexion : Impossible de se connecter au serveur");
			auth->setEvent("0","Impossible de se connecter au serveur");
		}
	}
}

bool LoginState::frameRenderingQueued(const Ogre::FrameEvent& m_FrameEvent)
{
	CEGUI::System& gui_system(CEGUI::System::getSingleton());

	gui_system.injectTimePulse(m_FrameEvent.timeSinceLastFrame);
	gui_system.getDefaultGUIContext().injectTimePulse(m_FrameEvent.timeSinceLastFrame);

	if(m_bQuit == true)
	{
		popGameState();
		return false;
	}
	auth->update();

	return true;
}


