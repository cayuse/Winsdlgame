#include "connect.h"

// these functions just return the name of the file defined in the header so the game engine can load them up.
std::string Connect::getBoardBG()
{
  return boardBG;
}
std::string Connect::getExPiece()
{
  return exPiece;
} 
std::string Connect::getOhPiece()
{
  return ohPiece;
}

int Connect::getBoardHW()
{
  return boardHW;
}

std::string Connect::exPlayerName()
{
  return exPlayer;
}
std::string Connect::ohPlayerName()
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
bool Connect::move(int horiz, int vert)
{
  //stub return to supress whining
  return true;
}

/*
 *  Marker getCurrentPlayer()
 *  this method simply returns a Marker corresponding to whose turn it is:
 *  EX for X || OH for O
 */
Marker Connect::getCurrentPlayer()
{
  //stub return to supress whining
  return MT;
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
bool Connect::checkForWins(Marker &player)
{
  //stub return to supress whining
  return true;
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
bool Connect::getWinDimension(int &x1, int &y1, int &x2, int &y2)
{
  //stub return to supress whining
  return true;
}

/*
 *  void resetBoard()
 *  checks for a winner and if there was one, increments
 *  that player's total wins _THEN_
 *
 *  resets the gamestate to initial settings
 */
void Connect::resetBoard()
{
  
}

/*
 *  void getScores(int &xWins, int &oWins)
 *  just stores the current tally of wins for the
 *  players into the int references
 */
void Connect::getScores(int &xWins, int &oWins)
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
Marker Connect::getMarkerAt(int horiz, int vert)
{
  //stub return to supress whining
  return MT;
}
