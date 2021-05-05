#ifndef DEMINEUR_H
#define DEMINEUR_H
#include <iostream>
#include <string>
#include "demineur.hpp"
#include "Tile.hpp"

using namespace std;

class joueur : public Tile, public demineur
{
   string name;
   int nbrev;
   int nbrdef;

    public:
    joueur(); //si le joueur est un visiteur, appel à un constructeur par défaut.
    joueur(string);
    ~joueur();
   int getV(); //revoie le nombre de victoire
   int getdef(); //revoie le nombre d'echec
   void setV(); //incrémenter le nombre de victoire
   void setdef(); //incrémenter le nombre d'echec
};


#endif