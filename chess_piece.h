#ifndef ChessPiece_H
#define ChessPiece_H

#include <string>
#include <glm/glm.hpp>
#include <learnopengl/model.h>

class ChessPiece {
public:
	// chess piece attributes
	glm::vec3 color;
	std::string team;
	std::string name;
	bool selected;
	bool captured;
	Model model;

	// constructor
	ChessPiece(Model mod = Model("resources/objects/chess_pieces/bishop.obj"), glm::vec3 col = glm::vec3(0.0f, 0.0f, 0.0f))
		: model{ mod }, color{ col }, selected{ false }, captured{ false } { };

	virtual vector<std::string> legalMoves() = 0;	
};

class Pawn : public ChessPiece {
public:
	Pawn(std::string tm) : ChessPiece(Model("resources/objects/chess_pieces/pawn.obj")) { team = tm; }

	vector<std::string> ChessPiece::legalMoves() {
		return vector<std::string>({ "hello" });
	}

};

class Rook : public ChessPiece {
public:
	Rook(std::string tm) : ChessPiece(Model("resources/objects/chess_pieces/rook.obj")) { team = tm; }

	vector<std::string> ChessPiece::legalMoves() {
		return vector<std::string>({ "hello" });
	}

};

class Bishop : public ChessPiece {
public:
	Bishop(std::string tm) : ChessPiece(Model("resources/objects/chess_pieces/bishop.obj")) { team = tm; }

	vector<std::string> ChessPiece::legalMoves() {
		return vector<std::string>({ "hello" });
	}

};

class Knight : public ChessPiece {
public:
	Knight(std::string tm) : ChessPiece(Model("resources/objects/chess_pieces/horse.obj")) { team = tm; }

	vector<std::string> ChessPiece::legalMoves() {
		return vector<std::string>({ "hello" });
	}

};

class King : public ChessPiece {
public:
	King(std::string tm) : ChessPiece(Model("resources/objects/chess_pieces/king.obj")) { team = tm; }

	vector<std::string> ChessPiece::legalMoves() {
		return vector<std::string>({ "hello" });
	}

};

class Queen : public ChessPiece {
public:
	Queen(std::string tm) : ChessPiece(Model("resources/objects/chess_pieces/queen.obj")) { team = tm; }

	vector<std::string> ChessPiece::legalMoves() {
		return vector<std::string>({ "hello" });
	}

};

#endif // !ChessPiece_H 
