#include <iostream>
#include <string>
#include "./headers/Player.hpp";
#include "./headers/Demineur.hpp"

using namespace std;

Player::Player(unsigned short nbrev = 0, unsigned short nbrdef = 0, string name = "Player1") // Default
{
    this->nbrev = nbrev;
    this->nbrdef = nbrdef;
    this->name = name;
}
Player::Player(string Name, unsigned short nbrdef = 0, unsigned short nbrev = 0)
{
    this->nbrdef = nbrdef;
    this->nbrev = nbrev;
    Name = name;
    cout << "Enter your name";
    cin >> Name;
}
Player::~Player() {}

void Player::setV() // the game is over
{
    if ((Demineur::hasEnded() == true) && (Timer::DureeTime() != 0)) // time isn't over
        nbrev++;
}
void Player::setdef()
{
    if ((Tile::isBomb() == true) || (Timer::DureeTime() == 0)) // if i should add clicked or not or time is over
        nbrdef++;
}

unsigned short Player::getV()
{
    return nbrev;
}

unsigned short Player::getDef()
{
    return nbrdef;
}

void Player::setV() 
{
    if (Demineur::hasEnded() == true && timer::DureeTime() != 0) // time isn't over
        nbrev++;
}
void Player::setDef()
{
    if (hasMine() == true || timer::DureeTime() == 0) // if i should add clicked or not or time is over
        nbrdef++;
}
