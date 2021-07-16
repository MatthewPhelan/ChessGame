#pragma once

class ChessPiece
{
public:
	void kingMove(const int row, const int column);
	void queenMove(const int row, const int column);
	void bishopMove(const int row, const int column);
	void knightMove(const int row, const int column);
	void castleMove(const int row, const int column);
	void pawnMove(const int row, const int column);
	void noPieceSelected(const int row, const int column);
};