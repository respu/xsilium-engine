/*
 * \file Entite.cpp
 *
 *  Created on: \date 8 mai 2013
 *      Author: \author joda
 *  \brief :
 */

#include "Entite.h"

Entite::Entite() {
	// TODO Auto-generated constructor stub

}

Entite::~Entite() {
	// TODO Auto-generated destructor stub
}

void Entite::setVieEntite(int Vie)
{
	this->vieEntite = Vie;
}
int Entite::getVieEntite()
{
	return this->vieEntite;
}

void Entite::setNom(std::string nom)
{
	this->nom = new std::string(nom.c_str());
}

std::string * Entite::getNom()
{
	return this->nom ;
}