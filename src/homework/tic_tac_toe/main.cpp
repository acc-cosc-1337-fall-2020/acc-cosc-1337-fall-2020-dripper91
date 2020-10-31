#include "tic_tac_toe.h"
#include <iostream>

int main() 
{
	char run = 'Y';

	while(run =='Y' || run == 'y')
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

		if(game.get_winner() != "C")
			std::cout << "Player " << game.get_winner() << " wins the game!\n\n";
		else
			std::cout << "Game ended in a tie.\n\n";

		do
		{
			std::cout << "Play again? (y/n): ";
			std::cin >> run;
		} while (run != 'Y' && run != 'y' && run != 'N' && run != 'n');
	}
	
	return 0;
}