#include "go.h"

// since idk if this game will get written.. and if it does, mok isn't exactly going to be confused about what's goingon
// i'm going use this particular "game" to just load up with garbage test-ish code that will make it play-with-able.. but not really
// a playable game.. if in future someone decides to write this class, feel free to strip out any and all garbage


// these functions just return the name of the file defined in the header so the game engine can load them up.
std::string Go::getBoardBG()
{
  return boardBG;
}
std::string Go::getExPiece()
{
  return exPiece;
} 
std::string Go::getOhPiece()
{
  return ohPiece;
}

int Go::getBoardHW()
{
  return boardHW;
}

std::string Go::exPlayerName()
{
  return exPlayer;
}
std::string Go::ohPlayerName()
{
  return ohPlayer;
}

/*  bool move(int horiz, int vert)
 *  This method is used to place a move on the board.
 *  The move is given as a pair of ints, and references the board as such.
 *  in the case of Connect-4, 'legal moves' should be allowed anywhere on a
 *  column with space at the top
 *  this is just representitive.. the whole array is 8x8
 *
 *  [0][0] |   ...  | [0][7]
 * --------|--------|--------
 *    ...  | [4][4] |   ...
 * --------|--------|--------
 *  [7][0] |   ...  | [7][7]
 *
 *
 *  (if) the column for the move is full, then the method returns FALSE
 *  
 *  (if) the column has room, then the method returns TRUE  _AND_
 *  it puts the current player's "token" in that column  _AND_
 *  it changes the current_player variable (to the other player)
 */
bool Go::move(int horiz, int vert)
{
  //stub return to supress whining
  if (board[horiz][vert] == MT)
  {
    board[horiz][vert] = current_player;
    current_player = (current_player == EX) ? OH : EX;
    return true;
  }
  return false;
}

/*
 *  Marker getCurrentPlayer()
 *  this method simply returns a Marker corresponding to whose turn it is:
 *  EX for X || OH for O
 */
Marker Go::getCurrentPlayer()
{
  //stub return to supress whining
  return current_player;
}

/*
 *  bool checkForWins(int &dimension, Marker &player)
 *  this method checks the status of the game board and
 *  returns information based on that status.
 *
 *  (if) the game has become a catsgame then return bool = TRUE 
 *  (if) catsgame or no player has won, then
 *       player will bet set to MT
 *
 *  (if) there has been a winner:
 *       player is set to EX for X winner and OH for O Winner
 */
bool Go::checkForWins(Marker &player)
{
  //stub return to supress whining
  return false;
}

/*
 * bool getWinDimension(int &x1, int &y1, int &x2, int &y2)
 * this method sets x1,y1 and x2,y2 to mark the location of
 * the win.
 * in ttt that might be (0,0),(3,3) or (0,0),(0,3) whatever
 * it will be slightly more interesting in something like
 * connect 4 where it can be any 4 anywhere in the field.
 * 
 * (if) this is an appropriate way to score a win set return true
 *      and a line will be procedurarly drawn over the covered area
 *      
 * (if) this is not appropriate and the board should not be marked
 *      return false (e.g. othello)
*/
bool Go::getWinDimension(int &x1, int &y1, int &x2, int &y2)
{
  //stub return to supress whining
  return false;
}

/*
 *  void resetBoard()
 *  checks for a winner and if there was one, increments
 *  that player's total wins _THEN_
 *
 *  resets the gamestate to initial settings
 */
void Go::resetBoard()
{
  for (int outer = 0; outer < boardHW; outer++)
  {
    for (int inner = 0; inner < boardHW; inner++ )
    {
      board[outer][inner] = MT;
    }
  }
}

/*
 *  void getScores(int &xWins, int &oWins)
 *  just stores the current tally of wins for the
 *  players into the int references
 */
void Go::getScores(int &xWins, int &oWins)
{
  xWins = exWins;
  oWins = ohWins;
}

/*
 *  Marker getMarkerAt(int horiz, int vert)
 *  this will return the marker at the specified location
 *  it should match the contents of the array.
 *  this is just representitive.. the whole array is 8x8
 *
 *  [0][0] |   ...  | [0][7]
 * --------|--------|--------
 *    ...  | [4][4] |   ...
 * --------|--------|--------
 *  [7][0] |   ...  | [7][7]
 *
 */
Marker Go::getMarkerAt(int horiz, int vert)
{
  return board[horiz][vert];
}
