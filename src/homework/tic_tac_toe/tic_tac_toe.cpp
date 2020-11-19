//cpp
#include "tic_tac_toe.h"
#include <iostream>

void TicTacToe::start_game(std::string first_player)
{   
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::set_next_player()
{
    if(player == "X")
        player = "O";
    else if(player == "O")
        player = "X";
}

void TicTacToe::set_winner()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        if(player == "X")
            winner = "O";
        else if(player == "O")
            winner = "X";
    }
    else
        winner = "C";
}

std::string TicTacToe::get_player() const
{
    return player;
}

std::string TicTacToe::get_winner()
{
    return winner;
}

std::vector<std::string> TicTacToe::get_pegs() const
{
    return pegs;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

bool TicTacToe::check_board_full()
{
    bool isFull = true;

    for (auto x : pegs)
    {
        if(x == " ")
            isFull = false;
    }

    return isFull;
}

void TicTacToe::clear_board()
{
    for(int i=0; i < 9; i++)
        pegs[i] = " ";
}

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
       {
           set_winner();
           return true;
       }
    else
        return false;
}

void operator >>(std::istream &input, std::unique_ptr<TicTacToe> &game)
{
    int position;

    if(game->pegs.size()==9)
    {
        do
	    {
		    std::cout << "Enter the space to mark: ";
		    input >> position;
	    } while (position < 1 || position > 9);
    }
    if(game->pegs.size()==16)
    {
        do
	    {
		    std::cout << "Enter the space to mark: ";
		    input >> position;
	    } while (position < 1 || position > 16);
    }
	game->mark_board(position);
}

void operator <<(std::ostream &output, std::unique_ptr<TicTacToe> &game)
{
    if(game->pegs.size()==9)
    {
        output << game->pegs[0] << "|" << game->pegs[1] << "|" << game->pegs[2] << std::endl;
        output << game->pegs[3] << "|" << game->pegs[4] << "|" << game->pegs[5] << std::endl;
        output << game->pegs[6] << "|" << game->pegs[7] << "|" << game->pegs[8] << std::endl;
    }
    else if(game->pegs.size()==16)
    {
        output << game->pegs[0] << "|" << game->pegs[1] << "|" << game->pegs[2] << "|" << game->pegs[3] << std::endl;
        output << game->pegs[4] << "|" << game->pegs[5] << "|" << game->pegs[6] << "|" << game->pegs[7] << std::endl;
        output << game->pegs[8] << "|" << game->pegs[9] << "|" << game->pegs[10] << "|" << game->pegs[11] << std::endl;
        output << game->pegs[12] << "|" << game->pegs[13] << "|" << game->pegs[14] << "|" << game->pegs[15] << std::endl;
    }
}