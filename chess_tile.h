#ifndef ChessTile_H 
#define ChessTile_H

#include <string>
#include <glm/glm.hpp>
#include <learnopengl/model.h>
#include <material.h>

class ChessTile {
public:
	Model model;
	bool highlighted;

	ChessTile(Model mod = Model("resources/objects/chess_tile.obj"), bool highltd = false) : model{ mod }, highlighted{ highltd } { };
};

#endif // !ChessTile_H