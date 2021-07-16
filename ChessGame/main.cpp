#include "Gameboard.h"
#include "ChessPiece.h"
#include <iostream>

int main()
{
    int move{};
    Gameboard gameBoard{};
    gameBoard.initialize();
    gameBoard.print();
    do
    {
        std::cout << "\n\twhat piece do you want to move? ";
        std::cin >> move;
        gameBoard.move (move);
    } while (1);
    return 0;
}