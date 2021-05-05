#ifndef _DemineurBoard_H
#define _DemineurBoard_H
#include <iostream>
#include <map>
#include <vector>
#include "Difficulty.hpp"
#include "Tile.hpp"
#include <utility>
#include <string>
using namespace std;

typedef vector< tuple<int,int> > tuple_list;


class DemineurBoard : public Difficulty, public Tile
{

    unsigned short flags;
    Tile Board[20][20];

public:
    DemineurBoard();   // Constructor
    ~DemineurBoard();  // Destructor
    void create();     // Create the board
    void affiche();    // Displays the Board or testing purposes
    void setMines();   // Set mines in place
    void setNumbers(); // Set number for each tile
    void setNum();
    void Ines(Tile);
    tuple_list neighbours(int, int); // Returns a list of couple containing the postion of neighbours
    unsigned short minesLeft();
};

#endif