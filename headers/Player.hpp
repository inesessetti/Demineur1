#ifndef DEMINEUR_H
#define DEMINEUR_H
#include <iostream>
#include <string>
using namespace std;

class Player{
   string name;
   unsigned short nbrev;
   unsigned short nbrdef;

    public:
    Player(); //si le Player est un visiteur, appel à un constructeur par défaut.
    Player(string);
    Player(unsigned short,unsigned short,string);
    ~Player();
   unsigned short getV(); //revoie le nombre de victoire
   unsigned short getDef(); //revoie le nombre d'echec
   void setV(); //incrémenter le nombre de victoire
   void setDef(); //incrémenter le nombre d'echec
};


#endif