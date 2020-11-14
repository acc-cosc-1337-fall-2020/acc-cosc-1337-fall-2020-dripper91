//h
#include "tic_tac_toe.h"
#include <vector>
#include <string>

#ifndef TICTACMGR
#define TICTACMGR

class TicTacToeManager
{
    public:
        void save_game(std::unique_ptr<TicTacToe> &b);
        friend void operator <<(std::ostream& out, TicTacToeManager& manager);
        void get_winner_total();
    private:
        std::vector<std::unique_ptr<TicTacToe>> games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0; 
        void update_winner_count(std::string winner);
};

#endif