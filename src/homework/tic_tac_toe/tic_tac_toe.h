//h
#include <string>
#include <vector>

#ifndef TICTAC
#define TICTAC

class TicTacToe
{
    public:
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        std::string get_winner();
        void display_board() const;
    private:
        std::string player;
        std::string winner;
        std::vector<std::string> pegs = {" ", " ", " ", 
                               " ", " ", " ", 
                               " ", " ", " "};
        void set_next_player();
        void set_winner();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        bool check_board_full();    
        void clear_board();
};

#endif