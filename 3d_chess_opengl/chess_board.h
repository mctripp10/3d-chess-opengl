#ifndef ChessBoard_H 
#define ChessBoard_H

#include <string>
#include <glm/glm.hpp>
#include <learnopengl/model.h>
#include <chess_piece.h>

// Default board values
const unsigned int WIDTH = 8;
const unsigned int HEIGHT = 8;

class ChessBoard {
public:
	// chess board attributes
	unsigned int width;
	unsigned int height;
	vector<ChessPiece> board;
	Model tileModel;

	// constructor
	ChessBoard(vector<ChessPiece> b, Model tile) : board(board), tileModel(tile), width(WIDTH), height(HEIGHT) { };

private:

};

#endif // !ChessBoard_H 
