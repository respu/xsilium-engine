/*
 * \file Compte.h
 *
 *  Created on: \date 16 f�vr. 2013
 *      Author: \author joda
 *  \brief :
 */

#ifndef COMPTE_H_
#define COMPTE_H_

#include <stdint.h>

#include "Singleton/Singleton.h"

/*
 *
 */
class Compte : public xsilium::Singleton<Compte> {

	friend class xsilium::Singleton<Compte>;

public:
	Compte();
	virtual ~Compte();

	void setEtapeDeLogin(uint8_t etapeDeLogin);
	uint8_t getEtapeDeLogin();

	void setLogin(const char * login);

	const char * getLogin();

	void setPassWord(const char * password);

	const char * getPassWord();

	void setVersion(uint16_t version);
	uint16_t getVersion();


private:
    uint16_t  version;
    const char * platform;
    const char *   os;
    const char *   country;
    const char * login;
    const char * password;
    uint8_t etapeDeLogin;

};

#endif /* COMPTE_H_ */