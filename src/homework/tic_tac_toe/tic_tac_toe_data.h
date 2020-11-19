//h
#include "tic_tac_toe.h"

#ifndef TICTACDATA
#define TICTACDATA

class TicTacToeData
{
    public:
        void save_games(const std::vector<std::unique_ptr<TicTacToe>> &games);
        std::vector<std::unique_ptr<TicTacToe>> get_games();
};

#endif