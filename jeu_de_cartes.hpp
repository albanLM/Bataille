#ifndef JEU_DE_CARTES_HPP
#define JEU_DE_CARTES_HPP

#include <vector>
#include "carte.hpp"


class jeu_de_cartes 
{
	private :
		std::vector<carte*> cartes_;
		std::string nom_jeu_;
		int nb_carte_;
		static int createur_nom_;

	public :
		// Constructeurs
		jeu_de_cartes();
		std::string nouveau_nom();

		// Destructeur
		~jeu_de_cartes();

		// Accesseurs
		bool est_vide() const;
		std::string nom() const;

		// Méthodes
		void ajouter_carte(carte*& carte_);
		carte* retirer_carte();
		void melanger();

};

#endif