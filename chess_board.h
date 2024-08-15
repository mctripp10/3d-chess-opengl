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
	vector<vector<ChessPiece>> board;
	Model tileModel = Model("resources/objects/chess_tile.obj");

	// constructor
	ChessBoard(Model tile) : tileModel(tile), width(WIDTH), height(HEIGHT) {

		// Assign white pieces to board
		board[0][0] = Rook("white");
		board[0][1] = Knight("white");
		board[0][2] = Bishop("white");
		board[0][3] = Queen("white");
		board[0][4] = King("white");
		board[0][5] = Bishop("white");
		board[0][6] = Knight("white");
		board[0][7] = Rook("white");

		// Assign black pieces to board
		board[7][0] = Rook("black");
		board[7][1] = Knight("black");
		board[7][2] = Bishop("black");
		board[7][3] = Queen("black");
		board[7][4] = King("black");
		board[7][5] = Bishop("black");
		board[7][6] = Knight("black");
		board[7][7] = Rook("black");

		for (int i = 0; i < width; i++) {
			board[1][i] = Pawn("black");
			board[6][i] = Pawn("white");
		}

	};

	// methods
	bool check();
	bool checkmate();

private:

};

#endif // !ChessBoard_H 
