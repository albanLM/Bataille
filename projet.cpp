#include <ctime>
#include <iostream>
#include "carte.hpp"
#include "joueur.hpp"
#include "jeu_de_cartes.hpp"
#include "bataille.hpp"
#include "pioche.hpp"
 
using namespace std;

int main(void)
{
  srand(time(0));

  ////////////////////////////////////////////////////////////////////////
  // exemple de construction d'une carte constante
  // allocation par new dans la mémoire dynamique
  const carte *roi_de_coeur = new carte(couleur_carte::Coeur,
					valeur_carte::Roi,
					"");

  // affichage à l'écran (cout)
  cout << (*roi_de_coeur) << endl << endl;

  // libération de la mémoire dynamique
  delete roi_de_coeur;

  ////////////////////////////////////////////////////////////////////////
  // exemple de construction de toutes les cartes d'un jeu de cartes
  std::list<couleur_carte> lc = creer_liste_couleurs();
  std::list<valeur_carte> lv = creer_liste_valeurs();

  // itc : itérateur de parcours de la liste des couleurs
  auto itc = lc.cbegin();
  while (itc != lc.cend())
  {
    // itv : itérateur de parcours de la liste des valeurs
    auto itv = lv.cbegin();
    while (itv != lv.cend())
    {
      const carte *car = new carte(*itc,*itv,"");
      cout << (*car) << " ";
      delete car;

      ++itv;
    }
    ++itc;
  }
  cout << endl;
//TEST
joueur jo1("francis");
joueur jo2("félix");
jo1.ajouter_carte(new carte (couleur_carte::Coeur, valeur_carte::Roi,""));
cout <<jo1.nom() <<endl;
cout << *(jo1.carte_au_sommet()) <<endl ;
cout << jo1.nb_cartes() <<endl;
carte * c = jo1.retirer_carte();
cout << *(c)<< endl;
c = jo1.retirer_carte();
jo1.carte_au_sommet();
jo2.ajouter_carte(c);
cout << *(jo2.carte_au_sommet()) << endl;

  return 0;
}



