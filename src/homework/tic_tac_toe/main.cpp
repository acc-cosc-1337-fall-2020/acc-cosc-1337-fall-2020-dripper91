#include "tic_tac_toe.h"
#include <iostream>

int main() 
{
	TicTacToe game;
	std::string player;
	int position;

	do
	{
		std::cout << "Enter the character for player one (X/O): ";
		std::cin >> player;
	} while (player != "X" && player != "x" && player != "O" && player != "o");

	if(player=="x")
		player = "X";
	else if(player =="o")
		player = "O";

	game.start_game(player);

	while(!game.game_over())
	{
		do
		{
			std::cout << "Enter the space to mark: ";
			std::cin >> position;
		} while (position < 1 || position > 9);
	
		game.mark_board(position);

		game.display_board();
	}

	std::cout << "Game Over";
	
	return 0;
}