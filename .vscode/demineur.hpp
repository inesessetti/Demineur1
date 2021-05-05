#ifndef DEMINEUR_H
#define DEMINEUR_H
//#include "timer.hpp"
#include <iostream>
#include "demineurboard.hpp"

using namespace std;

class demineur : public demineurboard, public joueur
{
    
    
    int totalmoves;
public:
    demineur();
    ~demineur();
    void time_left();
    void endTheGame(); //t3ayet ll deconstructeur
    void Begin(); //compteur yebda ye7seb l wa9t
    void isPaused();  //ken pause yetssajel
    bool move(); //ken clicka 3ala case
    bool hasEnded(); //les mines lkol trouvés
    int nbreMoves(int); //calcule le nombre de cliques
};
#endif