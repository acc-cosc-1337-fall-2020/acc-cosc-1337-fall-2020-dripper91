//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void operator <<(std::ostream& out, const TicTacToeManager& manager)
{
    for (TicTacToe game : manager.games)
    {
        out << game;
        out << std::endl;
    }
}

//I didn't understand what the purpose of the get_winner_total function
//was. I assume it is to print the win values at the end of each game
//since there is no other function that does that. I left the parameters
//out since I didn't need them for this.
void TicTacToeManager::get_winner_total()
{
        std::cout << "X Wins: " << x_win << "  ///  ";
		std::cout << "O Wins: " << o_win << "  ///  ";
		std::cout << "Ties: " << ties << "\n\n";
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
        x_win++;
    else if(winner == "O")
        o_win++;
    else
        ties++;
}