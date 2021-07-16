#pragma once

class ChessPiece
{
public:
	void kingMove(const int row, const int column);
	void x_Move(const int row, const int column);
	void knightMove(const int row, const int column);
	void crossMove(const int row, const int column);
	void pawnMove(const int row, const int column, int player);
	void noPieceSelected(const int row, const int column);
};