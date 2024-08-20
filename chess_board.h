#ifndef ChessBoard_H 
#define ChessBoard_H

#include <string>
#include <glm/glm.hpp>
#include <learnopengl/model.h>
#include <chess_piece.h>
#include <chess_tile.h>
#include <material.h>
#include <vector>

// Default board values
const unsigned int WIDTH = 8;
const unsigned int HEIGHT = 8;
const unsigned int ACTIVE_PLAYER = 1;		// 1 or 2 corresponding to if player 1 or 2 is the active player

// materials
Material BLACK = Material(0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f, 0.2f);
Material WHITE = Material(0.8f, 0.8f, 0.8f, 0.8f, 0.8f, 0.8f, 0.8f, 0.8f, 0.8f);
Material BLUE = Material(0.2f, 0.5f, 0.8f, 0.2f, 0.5f, 0.8f, 0.2f, 0.5f, 0.8f);
Material LIGHT_BLUE = Material(0.5f, 0.5f, 0.7f, 0.5f, 0.7f, 0.8f, 0.5f, 0.5f, 0.7f);

class ChessBoard {
public:
	// chess board attributes
	unsigned int width;
	unsigned int height;
	unsigned int activePlayer;
	ChessPiece* board[8][8];
	Model tileModel;

	// constructor
	ChessBoard(Model tile = Model("resources/objects/chess_tile.obj")) : tileModel{ tile }, width{ WIDTH }, height{ HEIGHT }, activePlayer{ 1 } {

		// Assign white pieces to board
		board[0][0] = new Rook("white");
		board[0][1] = new Knight("white");
		board[0][2] = new Bishop("white");
		board[0][3] = new Queen("white");
		board[0][4] = new King("white");
		board[0][5] = new Bishop("white");
		board[0][6] = new Knight("white");
		board[0][7] = new Rook("white");

		// Assign black pieces to board
		board[7][0] = new Rook("black");
		board[7][1] = new Knight("black");
		board[7][2] = new Bishop("black");
		board[7][3] = new Queen("black");
		board[7][4] = new King("black");
		board[7][5] = new Bishop("black");
		board[7][6] = new Knight("black");
		board[7][7] = new Rook("black");

		for (int i = 0; i < width; i++) {
			board[1][i] = new Pawn("black");
			board[6][i] = new Pawn("white");
		}
		std::cout << "board load complete";
	};

	// methods

	void loadBoard(Shader &shader, glm::mat4 &model) {
		ChessTile tile = ChessTile();

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
					BLUE.setShader(shader);
					tile.model.Draw(shader);
				}
				else {
					LIGHT_BLUE.setShader(shader);
					tile.model.Draw(shader);
				}
				if (board[i][j] != NULL) {
					if (i < 2) {
						BLACK.setShader(shader);
					}
					else {
						WHITE.setShader(shader);
					}
					board[i][j]->model.Draw(shader);
				}
				model = glm::translate(model, glm::vec3(0.5f, 0.0f, 0.0f));
				shader.setMat4("model", model);
			}
			model = glm::translate(model, glm::vec3(-4.0f, 0.0f, 0.5f));
			shader.setMat4("model", model);
		}
	}

	bool check();
	bool checkmate();

private:

};

#endif // !ChessBoard_H 
