#ifndef DIFFICULTY_H
#define DIFFICULTY_H
#include <iostream>
using namespace std;
class Difficulty
{
    unsigned short wid;
    unsigned short len;
    unsigned short nbMine;
    int time;
    public:
    void easy(); // Set the easy parameters
    void medium();// Set the medium parameters
    void hard();// Set the hard parameters
   
    //getters
    unsigned short static getWidth();// Returns the width attribute
    unsigned short static getLength();// Returns the length attribute
    unsigned short static getMines();// Returns the nbMine attribute
    unsigned short static getTime();// Returns the time attribute

    //setters
    void setLevel();// Change the difficulty
};
#endif