#include "./DemineurBoard.hpp"
#include "./Difficulty.hpp"
#include "./Tile.hpp"
#include <iostream>
#include <stack>
#include <tuple>
#include <list>
using namespace std;

DemineurBoard::DemineurBoard()
{
    Board[0][0];
    flags = 0;
}
DemineurBoard::~DemineurBoard() {}
void DemineurBoard::create()
{
    unsigned short len;
    unsigned short wid;
    Difficulty::setLevel();
    len = Difficulty::getLength();
    wid = Difficulty::getWidth();
    Board[len][wid];
    for (unsigned short i = 0; i < len; i++)
    {
        for (unsigned short j = 0; j < wid; j++)
        {
            Board[i][j] = Tile(i, j);
        }
    }
    for (unsigned short k = 0; k < getMines(); k++)
        setMines();
};
void DemineurBoard::affiche()
{

    for (unsigned short i = 0; i < Difficulty::getWidth(); i++)
        cout << i ;
    for (unsigned short j = 0; j < Difficulty::getLength(); j++)
    {
        for (unsigned short i = 0; i < Difficulty::getWidth(); i++)
        {
            cout << Board[i][j].getStatus() << "|";
        }
    }
}

void DemineurBoard::setMines()
{
    unsigned short i;
    unsigned short j;
    unsigned short len, wid;
    len = Difficulty::getLength();
    wid = Difficulty::getWidth();
    unsigned short x = Difficulty::getMines();
    for (unsigned short k = 0; k < x; k++) //2
    {
        i = rand() % len + 1;
        j = rand() % wid + 1;
        Board[i][j].setBomb();
    }
}

unsigned short DemineurBoard::minesLeft() // 7at flag 3ala wa7da fiha mine
{
    return Difficulty::getMines() - flags;
}

tuple_list DemineurBoard::neighbours(int i, int j)
{
    tuple_list tl;
    for (int x = -1; x < 2; x++)
    {
        for (int y = -1; y < 2; y++)
        {
            if (i + x <= getLength() && i + x > 0 && y + j <= getWidth() && y + j > 0)
            {
                tl.push_back(tuple<int, int>{i + x, j + y});
            }
        }
    }
};

void DemineurBoard::Ines(Tile current) // a utiliser si la case cliqué n est pas une bombe
{
    unsigned short i, j;
    tuple_list l;
    stack<Tile> pile;
    Tile curTile;       // Holds the neighbouring tile
    pile.push(current); // Initiate the stack with the clicked tile
    while (!pile.empty())
    {
        i = pile.top().getX();
        j = pile.top().getY();
        l = neighbours(i, j); // Returns the list of neighbours' coordinates
        for (int s = 0; s < l.size(); s++)
        {
            pile.push(Board[get<0>(l[s])][get<1>(l[s])]);
        };
      //  pile.top().setPlayed();  Playing the current tile
        i = pile.top().getX();
        j = pile.top().getY();
        if (Board[i][j].getNum() == 0)
        {
            //ta3mel chay, bech to93ed fi west l pile bech tempili l voisins
            pile.top().setPlayed();
        }
        else
        {
            i = pile.top().getX();
            j = pile.top().getY();
            pile.pop();
            Board[i][j].visible();
        }
    }
}

void DemineurBoard::setNum()
{
    int num = 0;
    for (unsigned short i = 0; i < DemineurBoard::getLength(); i++)
    {
        for (int j = 0; j < DemineurBoard::getWidth(); j++)
        {
            if (Board[i][j].isBomb())
            {
                Board[i][j].setnum(9);
            }
            else
            {
                for (int x = -1; x < 2; x++)
                {
                    for (int y = -1; y < 2; y++)
                    {
                        if (i + x <= getLength() && i + x > 0 && y + j <= getWidth() && y + j > 0)
                        {
                            if (Board[i + x][j + y].isBomb())
                            {
                                num++;
                            }
                        }
                    }
                }
            }
            Board[i][j].setnum(num);
            num = 0;
        }
    }
}
