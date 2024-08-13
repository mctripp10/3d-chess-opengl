#ifndef Bishop_H 
#define Bishop_H

#include <chess_piece.h>
#include <learnopengl/model.h>
#include <string>

using namespace std;

class Bishop : public ChessPiece {
	
	Bishop() : ChessPiece(Model("resources/objects/chess_pieces/bishop.obj")) { }

	vector<std::string> ChessPiece::legalMoves() {
		return vector<std::string>({ "hello" });
	}

};


#endif // !Bishop_H
