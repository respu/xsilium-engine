/*
 * \file Authentification.h
 *
 *  Created on: \date 25 juin 2012
 *      Author: \author joda
 *  \brief :
 */

#ifndef AUTHENTIFICATION_H_
#define AUTHENTIFICATION_H_

#include "StructurePacket/StructurePacket.h"
#include "Shared/Network/opcode.h"
#include "Network/NetworkManager.h"
#include "Network/NetworkListener.h"
#include <sstream>
#include <cstring>
#include "UI/LoginState.h"

class LoginState;

struct cClient
	{
	    uint16_t  build;
	    uint8_t   platform[4];
	    uint8_t   os[4];
	    uint8_t   country[4];
	    const char * login;
	    const char * password;
	    uint8_t etape;
	};

enum typerequete
{
   XSILIUM_AUTH = 0,
   XSILIUM_ALL
};


/*
 *
 */
class Authentification : public NetworkListener {

public:
	Authentification();
	virtual ~Authentification();

	void InitialisationAuth();

	void handleReturn(ENetEvent * packet);

	bool sendAuthentification();

	void updateNetwork(int event ,ENetEvent * packet);


	void setLoginPwd(const char * user,const char * password);

	void setLogin(LoginState *login);

private:
	NetworkManager * networkManager;
	LoginState *login;
	ENetEvent eventAuth;
	cClient client;

};

#endif /* AUTHENTIFICATION_H_ */