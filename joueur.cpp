#include <iostream>
#include <string>
#include "./headers/joueur.hpp";

using namespace std;

joueur ::joueur()
{
    nbrev = 0;
    nbrdef = 0;
    name = "joueur 1";
}

joueur::joueur(string Name)
{
    nbrdef = 0;
    nbrev = 0;
    cout << "please enter your name" << Name << endl;
}

joueur::~joueur() // a voir
{
    string Name;
    nbrdef = 0;
    nbrev = 0;
    Name=""; 
}    

int  joueur::getV()
{
    return nbrev;
}

int  joueur::getdef()
{
    return nbrdef;
}

void joueur::setV() // the game is over
{
    if( hasEnded() ==true && ) // time isn't over
        nbrev++;
    

}
void joueur::setdef()
{
    if ( hasMine() ==true || ) // if i should add clicked or not or time is over
    nbrdef++ ;
}



