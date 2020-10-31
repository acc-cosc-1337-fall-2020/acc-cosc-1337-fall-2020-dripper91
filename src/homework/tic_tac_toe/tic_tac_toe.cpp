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

void TicTacToe::display_board() const
{
    std::cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << std::endl;
    std::cout << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << std::endl;
    std::cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << std::endl;
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
    return check_board_full();
}