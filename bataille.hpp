#ifndef BATAILLE_HPP
#define BATAILLE_HPP

#include "joueur.hpp"
#include "pioche.hpp"
#include "jeu_de_cartes.hpp"

class bataille 
{
	private:
		std::vector<joueur> joueurs_;
		std::vector<jeu_de_cartes> jeux_;
		pioche pioche_;

	public:
		// Cosnstructeur
		bataille(joueur[] joueur_, jeu_de_cartes[] jeux);
		bataille(joueur[] joueur_);
		bataille(jeu_de_cartes[] jeux);

		// Destructeur
		~bataille();

		// Accesseurs
		int nb_joueurs() const;
		std::string gagnant() const;
		int test_fin_partie() const;

		// Méthodes
		void ajouter_jeu(jeu_de_cartes& jeu);
		void ajouter_joueur(joueur& jo);
		void distribuer_cartes();
		void reconstituer_jeux();
		void commencer_une_partie(const int& nmax, const int& m);
		void jouer_un_coup();
};

#endif
