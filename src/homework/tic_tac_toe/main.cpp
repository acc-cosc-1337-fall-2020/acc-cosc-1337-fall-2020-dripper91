#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

int main() 
{
	char run = 'Y';
	TicTacToeManager game_mgr;

	while(run =='Y' || run == 'y')
	{
		TicTacToe game;
		std::string player;

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
			std::cin >> game;
			std::cout << game;
		}

		game_mgr.save_game(game);

		if(game.get_winner() != "C")
			std::cout << "Player " << game.get_winner() << " wins the game!\n\n";
		else
			std::cout << "Game ended in a tie.\n\n";

		game_mgr.get_winner_total();

		do
		{
			std::cout << "Play again? (y/n): ";
			std::cin >> run;
		} while (run != 'Y' && run != 'y' && run != 'N' && run != 'n');
	}

	std::cout << game_mgr;
	
	return 0;
}