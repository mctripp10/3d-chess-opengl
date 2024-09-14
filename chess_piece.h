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
	//Model model;

	// constructor
	ChessPiece(glm::vec3 col = glm::vec3(0.0f, 0.0f, 0.0f))
		: color{ col }, selected{ false }, captured{ false } { };

};

class Pawn : public ChessPiece {
public:
	Pawn(std::string tm) : ChessPiece() { team = tm, name = "Pawn"; }
};

class Rook : public ChessPiece {
public:
	Rook(std::string tm) : ChessPiece() { team = tm, name = "Rook"; }
};

class Bishop : public ChessPiece {
public:
	Bishop(std::string tm) : ChessPiece() { team = tm, name = "Bishop"; }
};

class Knight : public ChessPiece {
public:
	Knight(std::string tm) : ChessPiece() { team = tm, name = "Knight"; }
};

class King : public ChessPiece {
public:
	King(std::string tm) : ChessPiece() { team = tm, name = "King"; }
};

class Queen : public ChessPiece {
public:
	Queen(std::string tm) : ChessPiece() { team = tm, name = "Queen"; }
};

#endif // !ChessPiece_H 
