#include "Tile.hpp"
#include <iostream>


Tile::Tile()
{
    posRow=0;
    posCol=0;
    num=0;
    played=false;
    status='e'; //empty
}
Tile::Tile(unsigned short x, unsigned short y){
    posRow=x;
    posCol=y;
    num=0;
    played=false;
    status='e';
}
void Tile::visible()
{
    cout << getNum();
}
bool Tile::isPlayed(){

    return played;
}
unsigned short Tile::getX()
{
    return posRow;
};
    unsigned short Tile::getY()
    {
        return posCol;
    };
bool Tile::isBomb(){
    if(num==9)
    {return true;}

    return false;
}

bool Tile::isFlagged(){
    if(status=='f'){return true;}

    return false;
}

bool Tile::isQuestion(){
    if(status=='q'){return true;}

    return false;
}

unsigned short Tile::getNum(){
    return num;
    }

void Tile::setPlayed(){ played=true;}
void Tile::setBomb(){ num=9;}
void Tile::setFlag(){ status='f';}
void Tile::setQuestion(){ status='q';}
void Tile::setFree(){ status='e';}
void Tile::setnum(int x)
{
    num=x;
};
