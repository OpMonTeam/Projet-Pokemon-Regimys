#include "Espece.hpp"
#include "../evolution/Evolution.hpp"
#include "../evolution/evolutions.hpp"
#include "../start/main.hpp"

Espece::~Espece() {
	delete(evolution);
	free(EVgiven);
}

Espece::Espece(int atk, int def, int atkSpe, int defSpe, int vit, int pv, std::string name, int type1, int type2, int maniereEvolution/*En fait faut mettre 0, il est la pour un souci de compatibilit�*/, int niveauEvolution, Evolution *evolType, std::vector<int> EVGiven, float taille, float poids, std::string entreeOpdex, int expGiven, int expMax, int tauxDeCapture, int numeroOpdex) {
	if (atk < 0 || def < 0 || atkSpe < 0 || defSpe < 0 || vit < 0 || pv < 0) {
		gererErreur("Stats < 0 Espece<Initializer>", true);
	}
	if (expGiven < 0) {
		gererErreur("expGiven < 0 Espece<Initializer>", true);
	}
	if(evolType == NULL){
        evolType = (Evolution*)new E_Nope();
	}
	numeroOpdex = 0;
	this->tauxDeCapture = tauxDeCapture;
	this->baseAtk = atk;
	this->baseDef = def;
	this->baseAtkSpe = atkSpe;
	this->baseDefSpe = defSpe;
	this->baseVit = vit;
	this->nom = name;
	this->basePV = pv;
	this->type1 = type1;
	this->type2 = type2;
	this->niveauEvolution = niveauEvolution;
	this->evolType = evolType;
	this->evolution = this->evolType->getEvolution();
	this->poids = poids;
	this->taille = taille;
	this->entreeOpdex = entreeOpdex;
	this->expGiven = expGiven;
	EVgiven = (int *)malloc( EVGiven.size() * sizeof(int) );
	evSize = EVGiven.size();
	for (unsigned int i = 0; i < EVGiven.size(); i++) {
		EVgiven[i] = EVGiven[i];
	}

	this->expMax = expMax;
	switch (this->expMax) {
		case 800000:
			courbe = CourbeExp::RAPIDE;
			break;
		case 1000000:
			courbe = CourbeExp::MOYENNE;
			break;
		case 1059860:
			courbe = CourbeExp::PARABOLIQUE;
			break;
		case 1250000:
			courbe = CourbeExp::LENTE;
			break;
		case 600000:
			courbe = CourbeExp::ERRATIQUE;
			break;
		case 1640000:
			courbe = CourbeExp::FLUCTUANTE;
			break;
		default:
			courbe = CourbeExp::MOYENNE;
	}
	this->numeroOpdex = numeroOpdex;

}

void Espece::checkEvol() {
	evolType->checkEvo();
	this->evolution = evolType->getEvolution();
}

void Espece::checkAtkLvls() {
	//this->atksByLevels = Initializer::atkOpLvl[OpdexNumberInit];
}
