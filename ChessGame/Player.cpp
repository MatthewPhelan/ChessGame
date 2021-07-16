#include <iostream>
#include "Player.h"

void Player::changePlayer()
{
	if (playerTurn)
	{
		std::cout << "\n\n\t\t\tPlayer 2's turn";
		playerTurn = 0;
	}
	else
	{
		std::cout << "\n\n\tPlayer 1's turn";
		playerTurn = 1;
	}

}