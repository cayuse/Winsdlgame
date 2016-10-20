#ifndef _CONNECT_
#define _CONNECT_

#include "bondiGameInterface.h"

#define  CONNECT_BOARD_SIZE 8


// Class Definition for Tic Tac Toe
class Connect: public bondiGameInterface
{
private:
    /* board height/width. Doing it this way in case we make different
     * games.. All games that start with this mess should be square
     * this may change if i get ambitious
    */

    static const int boardHW = CONNECT_BOARD_SIZE; // height/width of board
    
    int exWins  = 0; // init no wins for X
    int ohWins  = 0; // init no wins for O
    std::string boardBG = "connectboard.png";
    std::string exPiece = "connectex.png";
    std::string ohPiece = "connectoh.png";
    std::string exPlayer = "Black";
    std::string ohPlayer = "Red";
    
    Marker board [CONNECT_BOARD_SIZE][CONNECT_BOARD_SIZE]; // init board as empty.
    Marker current_player = EX; // init as "its X's move"
    
public:
    std::string getBoardBG();
    std::string getExPiece();
    std::string getOhPiece();
    int getBoardHW();
    std::string exPlayerName();
    std::string ohPlayerName();
    bool move(int horiz, int vert);
    Marker getCurrentPlayer();
    bool checkForWins(Marker &player);
    bool getWinDimension(int &x1, int &y1, int &x2, int &y2);
    void resetBoard();
    void getScores(int &xWins, int &oWins);
    Marker getMarkerAt(int horiz, int vert);
};


#endif
