#ifndef ChessBoard_H 
#define ChessBoard_H

#include <string>
#include <glm/glm.hpp>
#include <learnopengl/model.h>
#include <chess_piece.h>

// Default board values
const unsigned int WIDTH = 8;
const unsigned int HEIGHT = 8;
const unsigned int ACTIVE_PLAYER = 1;		// 1 or 2 corresponding to if player 1 or 2 is the active player

class ChessBoard {
public:
	// chess board attributes
	unsigned int width;
	unsigned int height;
	unsigned int activePlayer;
	vector<ChessPiece> board;
	Model tileModel;

	// constructor
	ChessBoard(vector<ChessPiece> positions, Model tile) : board(positions), tileModel(tile), width(WIDTH), height(HEIGHT) { };

	// methods
	bool check();
	bool checkmate();


private:

};

#endif // !ChessBoard_H 
