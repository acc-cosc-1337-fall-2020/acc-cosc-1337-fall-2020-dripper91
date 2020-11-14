//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> &b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

void operator <<(std::ostream& out, TicTacToeManager& manager)
{
    for (std::unique_ptr<TicTacToe> &game : manager.games)
    {
        out << game;
        out << std::endl;
    }
}

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