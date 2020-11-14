#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <memory>

int main() 
{
	char run = 'Y';
	TicTacToeManager game_mgr;

	while(run =='Y' || run == 'y')
	{
		std::unique_ptr<TicTacToe> game;
		std::string player;
		int gamesize;

		std::cout << "Play 3x3 game or 4x4? ";

		std::cin >> gamesize;

		while (gamesize != 3 && gamesize != 4)
		{
			std::cout << "Enter 3 or 4: ";
			std::cin >> gamesize;
		} 

		if(gamesize==3)
			game = std::make_unique<TicTacToe3>();
		else if(gamesize==4)
			game = std::make_unique<TicTacToe4>();
		 
		do
		{
			std::cout << "Enter the character for player one (X/O): ";
			std::cin >> player;
		} while (player != "X" && player != "x" && player != "O" && player != "o");

		if(player=="x")
			player = "X";
		else if(player =="o")
			player = "O";

		game->start_game(player);

		while(!game->game_over())
		{
			std::cin >> game;
			std::cout << game;
		}

		if(game->get_winner() != "C")
			std::cout << "Player " << game->get_winner() << " wins the game!\n\n";
		else
			std::cout << "Game ended in a tie.\n\n";

		game_mgr.save_game(game);

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