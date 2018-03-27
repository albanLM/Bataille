#include "bataille.hpp"

bataille::bataille(joueur[] joueurs, jeu_de_cartes[] jeux)
{
	for (joueur j : joueurs)
	{
		joueurs_.push_back(j);
	}

	for (jeu_de_cartes jc : jeux)
	{
		jeux_.push_back(jc);
	}
}

bataille::bataille(joueur[] joueurs)
{
	for (joueur j : joueurs)
	{
		joueurs_.push_back(j);
	}
}

bataille::bataille (jeu_de_cartes[] jeux)
{
	for (jeu_de_cartes jc : jeux)
	{
		jeux_.push_back(jc);
	}
}