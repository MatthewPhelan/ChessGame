#pragma once

#include <array>
#include <string>
#include "Player.h"

class Gameboard
{
public:
    enum class SquareState
    {
        EmptySlot,
        King,
        Queen,
        Bishop,
        Knight,
        Castle,
        Pawn
    };
    void move(const int playerMove, Player& player);
    void initialize();
    void print() const;

private:
    std::string SquareStateToString(SquareState squareState) const;

    std::array<std::array<SquareState, 8>, 8> board{};
};