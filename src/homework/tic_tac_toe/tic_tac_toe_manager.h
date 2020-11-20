//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include <vector>
#include <string>

#ifndef TICTACMGR
#define TICTACMGR

class TicTacToeManager
{
    public:
        TicTacToeManager() = default;
        TicTacToeManager(TicTacToeData &data);
        void save_game(std::unique_ptr<TicTacToe> &b);
        friend void operator <<(std::ostream& out, TicTacToeManager& manager);
        void get_winner_total();
        ~TicTacToeManager() { data.save_games(games);}
    private:
        std::vector<std::unique_ptr<TicTacToe>> games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0; 
        TicTacToeData data;
        void update_winner_count(std::string winner);
};

#endif