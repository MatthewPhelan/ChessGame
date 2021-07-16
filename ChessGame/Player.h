#pragma once

class Player
{
public:
	void changePlayer();
private:
	int player1Score{};
	int player2Score{};
	int playerTurn{ 0 };
};