#include "joueur.hpp"

///////////////////////////////////////////
joueur::joueur(const std::string& nom_joueur):
	nom_joueur_(nom_joueur)
{}

joueur::~joueur()
{}

int joueur::nb_cartes() const
{
	return main_.size();
}

std::string joueur::nom() const 
{
	return nom_joueur_;
}

carte* joueur::carte_au_sommet() const
{
  	if (main_.size()==0)
	{
	  std::cout<< "le joueur "<<nom_joueur_<<" n'a pas de cartes"<<std::endl;
	  return 0;
	}else{
	  return main_.front();
	}
}


carte* joueur::retirer_carte()
{
	carte* tmp = main_.front();
	main_.pop();
	return tmp;
}


void joueur::ajouter_carte(carte* car)
{
	main_.push(car);
}
/*
void joueur::affichage() 
{
  if(main_.size()==0)
  {
	std::cout << "la mains de "<<nom_joueur_<<" est vide";
  }
  else
  {
    auto itc = main_.begin();
    while (itc!= main_.cend())
    {
	  std::cout << *itc << " - ";
	  ++itc;
    }
  }
  std::cout << std::endl;
}
*/
