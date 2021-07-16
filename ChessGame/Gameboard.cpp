#include "Gameboard.h"
#include <iostream>
#include "ChessPiece.h"

void Gameboard::initialize()
{
    SquareState backPieces[] = {    SquareState::Castle,
                                    SquareState::Knight,
                                    SquareState::Bishop,
                                    SquareState::King,
                                    SquareState::Queen,
                                    SquareState::Bishop,
                                    SquareState::Knight,
                                    SquareState::Castle
    };

    for (auto column : board)
        for (auto element : column)
            element = SquareState::EmptySlot;
    for (int columnCounter = 0; columnCounter < 8; columnCounter++)
    {
        board[1][columnCounter] = SquareState::Pawn;
        board[6][columnCounter] = SquareState::Pawn;
    }

    for (int columnCounter = 0; columnCounter < 8; columnCounter++)
    {
        board[0][columnCounter] = backPieces[columnCounter];
        board[7][columnCounter] = backPieces[columnCounter];
    }

    board[4][4] = SquareState::King;

}

void Gameboard::print() const
{
    std::cout << std::endl << "\t    1  2  3  4  5  6  7  8"<< std::endl << std::endl;
    for (auto column : board)
    {
        static int rowValue = 1;
        std::cout << "\t" << rowValue << "   ";
        for (auto element : column)
            std::cout  << SquareStateToString(element) << "  ";
        std::cout << std::endl;
        rowValue++;
    }
}

std::string Gameboard::SquareStateToString(SquareState squareState) const
{
    if (squareState == SquareState::King) return "K";
    if (squareState == SquareState::Queen) return "Q";
    if (squareState == SquareState::Bishop) return "B";
    if (squareState == SquareState::Knight) return "H";
    if (squareState == SquareState::Castle) return "C";
    if (squareState == SquareState::Pawn) return "P";
    if (squareState == SquareState::EmptySlot)  return "-";
    return "@";
}

void Gameboard::move(const int playerMove) {
    ChessPiece chessPiece{};
    int rowValue = (playerMove / 10) - 1;
    int columnValue = (playerMove % 10) - 1;

    if (rowValue > 7 || rowValue < 0 || columnValue < 0 || columnValue>7)
        std::cout << "\nerror, move isn't valid.";

    if (board[rowValue][columnValue] == SquareState::King)
        chessPiece.kingMove(rowValue, columnValue);
    if (board[rowValue - 1][columnValue - 1] == SquareState::Queen)
        chessPiece.queenMove(rowValue, columnValue);
    if (board[rowValue - 1][columnValue - 1] == SquareState::Bishop)
        chessPiece.bishopMove(rowValue, columnValue);
    if (board[rowValue - 1][columnValue - 1] == SquareState::Knight)
        chessPiece.knightMove(rowValue, columnValue);
    if (board[rowValue - 1][columnValue - 1] == SquareState::Castle)
        chessPiece.castleMove(rowValue, columnValue);
    if (board[rowValue - 1][columnValue - 1] == SquareState::Pawn)
        chessPiece.pawnMove(rowValue, columnValue);
    if (board[rowValue - 1][columnValue - 1] == SquareState::EmptySlot)
        chessPiece.noPieceSelected(rowValue, columnValue);
} 

