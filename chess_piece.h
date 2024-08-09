#ifndef ChessPiece_H 
#define ChessPiece_H

#include <string>
#include <glm/glm.hpp>
#include <learnopengl/model.h>

class ChessPiece {
public:
	// chess piece attributes
	std::string position;
	glm::vec3 color;
	Model model;

	// constructor
	ChessPiece(std::string pos = "A1", glm::vec3 col = glm::vec3(0.0f, 0.0f, 0.0f), Model mod) : position{ pos }, color{ col }, model{ mod } { };

	vector<std::string> legalMoves();

private:
	
};

#endif // !ChessPiece_H 
