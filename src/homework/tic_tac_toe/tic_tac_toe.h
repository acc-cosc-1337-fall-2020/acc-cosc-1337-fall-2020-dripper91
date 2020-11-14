//h
#include <string>
#include <vector>
#include <memory>

#ifndef TICTAC
#define TICTAC

class TicTacToe
{
    public:
        TicTacToe(int size) : pegs(size*size, " "){}
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        std::string get_winner();
        friend void operator >>(std::istream &input, std::unique_ptr<TicTacToe> &game);
        friend void operator <<(std::ostream &output, std::unique_ptr<TicTacToe> &game);
    protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
    private:
        std::string player;
        std::string winner;
        void set_next_player();
        void set_winner();
        bool check_board_full();    
        void clear_board();
};

#endif