#pragma once

class Player
{
public:
	void changePlayer();
	int getPlayerTurn();
private:
	int player1Score{};
	int player2Score{};
	int playerTurn{ 0 };
};