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

void TicTacToe::display_board() const
{
    std::cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << std::endl;
    std::cout << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << std::endl;
    std::cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << std::endl;
}

bool TicTacToe::check_column_win()
{
    if(pegs[0] == pegs[3] && pegs[3] == pegs[6] && pegs[6] != " ")
        return true;
    else if(pegs[1] == pegs[4] && pegs[4] == pegs[7] && pegs[7] != " ")
        return true;
    else if(pegs[2] == pegs[5] && pegs [5] == pegs[8] && pegs[8] != " ")
        return true;
    else
        return false;
}

bool TicTacToe::check_row_win()
{
    if(pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[2] != " ")
        return true;
    else if(pegs[3] == pegs[4] && pegs[4] == pegs[5] && pegs[5] != " ")
        return true;
    else if(pegs[6] == pegs[7] && pegs[7] == pegs[8] && pegs[8] != " ")
        return true;
    else
        return false;
}

bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
        return true;
    else if(pegs[6] == pegs[4] && pegs[4] == pegs[2] && pegs[2] != " ")
        return true;
    else
        return false;
}

bool TicTacToe::check_board_full()
{
    bool isFull = false;

    if(pegs[0] != " " && pegs[1] != " " && pegs[2] != " " && pegs[3] != " " && pegs[4] != " "
        && pegs[5] != " " && pegs[6] != " " && pegs[7] != " " && pegs[8] != " ")
        isFull = true;
    
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