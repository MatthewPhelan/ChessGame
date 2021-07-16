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

void ChessPiece::x_Move(const int row, const int column)
{
    int rowChecker{}, columnChecker{};

    for(rowChecker=row, columnChecker = column; rowChecker != 7 && columnChecker != 7; rowChecker++, columnChecker++ )
        std::cout << "\n\t" << rowChecker + 2 << columnChecker + 2;
    for (rowChecker = row, columnChecker = column; rowChecker != 0 && columnChecker != 0; rowChecker--, columnChecker--)
        std::cout << "\n\t" << rowChecker << columnChecker;
    for (rowChecker = row, columnChecker = column; rowChecker != 7 && columnChecker != 0; rowChecker++, columnChecker--)
        std::cout << "\n\t" << rowChecker + 2 << columnChecker;
    for (rowChecker = row, columnChecker = column; rowChecker != 0 && columnChecker != 7; rowChecker--, columnChecker++)
        std::cout << "\n\t" << rowChecker << columnChecker + 2;
}

void ChessPiece::knightMove(const int row, const int column)
{
    std::cout << "\tPiece: Knight\n\tAvaliable move(s):";
    if (row < 6 && column > 0)
        std::cout << "\n\t" << row + 3 << column;
    if (row < 6 && column < 6)
        std::cout << "\n\t" << row + 3 << column + 2;
    if (row > 1 && column > 0)
        std::cout << "\n\t" << row - 1 << column;
    if (row > 1 && column < 6)
        std::cout << "\n\t" << row - 1 << column + 2;
    if (row > 0 && column > 1)
        std::cout << "\n\t" << row << column - 1;
    if (row < 7 && column > 1)
        std::cout << "\n\t" << row  + 2 << column - 1;
    if (row > 0 && column < 6)
        std::cout << "\n\t" << row << column + 3;
    if (row < 7 && column < 6)
        std::cout << "\n\t" << row + 2 << column + 3;
}

void ChessPiece::crossMove(const int row, const int column)
{
    for (int rowChecker = 0; rowChecker < 8; rowChecker++)
    {
        if (!(rowChecker == row))
            std::cout << "\n\t" << rowChecker + 1 << column + 1;
    }
    for (int columnChecker = 0; columnChecker < 8; columnChecker++)
    {
        if (!(columnChecker == column))
            std::cout << "\n\t" << row + 1 << columnChecker + 1;
    }
}

void ChessPiece::pawnMove(const int row, const int column, int player)
{
    std::cout << "\tPiece: Pawn\n\tAvaliable move(s):";
    if (player == 0)
    {
        if (row == 6)
            std::cout << "\n\t" << row -1 << column + 1;
        if (row > 0)
            std::cout << "\n\t" << row  << column + 1;
    }
    else 
    {
        if (row == 1)
            std::cout << "\n\t" << row +3 << column + 1;
        if (row < 7)
            std::cout << "\n\t" << row + 2 << column + 1;
    }
}

void ChessPiece::noPieceSelected(const int row, const int column)
{
    std::cout << "\n\tWow, could have selected a piece";
   // if(row > 0)
}