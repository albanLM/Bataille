#ifndef JOUEUR_HPP
#define JOUEUR_HPP
#include <iostream>
#include <string>
#include <queue>
#include "carte.hpp"


class joueur {
public:
	//constructeur 
	joueur(const std::string& nom_joueur);

	//destructeur
	~joueur();

	//accesseur 
	int nb_cartes() const; //retourne le nombre de cartes 
	std::string nom() const; //retourne le nom du joueur
	carte* carte_au_sommet() const; //renvoie la carte en tête de la file

	//méthode 
	carte* retirer_carte(); //retire la carte en tête de file 
	void ajouter_carte(carte* car); //ajoute la carte car au 		fond de la file d'attente
	void affichage();
	 

private:
	const std::string nom_joueur_; //nom du joueur qui sert d'identifiant 
	std::queue<carte*> main_; //main du joueur 
};

#endif
