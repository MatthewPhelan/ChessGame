#include "ChessPiece.h"
#include <iostream>

void ChessPiece::kingMove(const int row, const int column)
{
    std::cout << "\tPiece: King\n\tAvaliable move(s):";
    if (row < 7)
        std::cout << "\n\t" << row + 2 << column + 1;
    if (row > 0)
        std::cout << "\n\t" << row  << column + 1;
    if (column < 7)
        std::cout << "\n\t" << row + 1 << column + 2;
    if (column > 0)
        std::cout << "\n\t" << row + 1 << column;
    if (row < 7 && column < 7)
        std::cout << "\n\t" << row + 2 << column + 2;
    if (row < 7 && column > 0)
    std::cout << "\n\t" << row + 2 << column;
    if (row > 0 && column < 7)
    std::cout << "\n\t" << row << column + 2;
    if (row > 0 && column > 0)
    std::cout << "\n\t" << row << column;
}

void ChessPiece::queenMove(const int row, const int column)
{

}

void ChessPiece::bishopMove(const int row, const int column)
{

}

void ChessPiece::knightMove(const int row, const int column)
{

}

void ChessPiece::castleMove(const int row, const int column)
{

}

void ChessPiece::pawnMove(const int row, const int column)
{

}

void ChessPiece::noPieceSelected(const int row, const int column)
{

}