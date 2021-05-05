#include "Demineur.hpp"
#include <iostream>
#include <string>
#include "time.h"
using namespace std;

Demineur::Demineur()
{
    totalmoves = 0;
}
Demineur::~Demineur()
{
}
string timeLeft()
{
    string time;
    time = DemineurBoard::getTime();
    return time;
}
void Demineur::endTheGame() 
{
    //popup ll the game is over
};

/*void Demineur::Begin() //compteur yebda ye7seb l wa9t
{
    Timer timer = Timer::Instance();
    bool isRunning = True;
    while (isRunning)
    {
        return (timer->calcul());
    }
    //if (hasEnded)
    // isRunning= false
}*/


bool Demineur::move()
{
    bool clic=false;
    int i;
    int j;
    cout << "Ligne : ";
    cin >> i;
    cout << "Colonne : ";
    cin >> j;
    if ()
}


bool Demineur::hasEnded() //les mines lkol trouvés
{
    if (getMineRest() == 0 || Timer::DureeTime() == 0)
        return true;
    else
        return false;
}
unsigned short Demineur::nbrMoves(unsigned short M = 0)
{
    while (!hasEnded)
    {
        if (move)
        {
            M++;
            cout << M;
        }
    }
}

