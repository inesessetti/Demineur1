#include <iostream>
#include <string>
#include "difficulty.hpp"

using namespace std;

void Difficulty::easy()
{
    wid = 4;
    len = 4;
    nbMine = 4; // nbMine= {(wid*len) / 4}
    time = 30;
}

void Difficulty::medium()
{
    wid = 6;
    len = 6;
    nbMine = 8;
    time = 60;
}

void Difficulty::hard()
{
    wid = 16;
    len = 16;
    nbMine = 39; // 15 a negocier
    time = 120;
}

unsigned short Difficulty::getWidth()
{
    return wid;
}

unsigned short Difficulty::getLength()
{
    return len;
}

unsigned short Difficulty::getMines()
{
    return nbMine;
}

int Difficulty::getTime()
{
    return time;
}

void Difficulty::setLevel()
{
    unsigned short choix;
    cout << "Tapez :" << endl;
    cout << "1) Niveau easy" << endl;
    cout << "2) Niveau medium" << endl;
    cout << "3) Niveau hard" << endl;
    cin >> choix;
    switch (choix)
    {
    case 1:
    {
        easy();
        break;
    }
    case 2:
    {
        medium();
        break;
    }
    case 3:
    {
        hard();
        break;
    }
    default:
        cout << "try again" << endl;
    }
};