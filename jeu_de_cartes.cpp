#include "jeu_de_cartes.hpp"
#include <algorithm>
#include <random>
#include <ctime>
#include <cstdlib>

int jeu_de_cartes::createur_nom_ = 0;

jeu_de_cartes::jeu_de_cartes() 
{
	nom_jeu_ = nouveau_nom();
	std::list<couleur_carte> lc = creer_liste_couleurs();
	std::list<valeur_carte> lv = creer_liste_valeurs();
	std::list<couleur_carte>::iterator it_lc = lc.begin();
	while (it_lc != lc.end())
	{
		std::list<valeur_carte>::iterator it_lv = lv.begin();
		while (it_lv != lv.end())
		{
			carte _carte(*it_lc, *it_lv, nom_jeu_);
			cartes_.push_back(&_carte);
			it_lv++;
		}
		it_lc++;
	}
}

std::string jeu_de_cartes::nouveau_nom()
{
	createur_nom_++;
	return "jeu_" + createur_nom_;
}

bool jeu_de_cartes::est_vide() const
{
	return nb_carte_ == 0;
}

carte* jeu_de_cartes::retirer_carte()
{
	carte* ret = cartes_.back();
	cartes_.pop_back();
	return ret;
}

void jeu_de_cartes::ajouter_carte(carte*& carte_)
{
	cartes_.push_back(carte_);
}

std::string jeu_de_cartes::nom() const
{
	return nom_jeu_;
}

void jeu_de_cartes::melanger()
{
	std::random_shuffle (cartes_.begin(), cartes_.end());
}