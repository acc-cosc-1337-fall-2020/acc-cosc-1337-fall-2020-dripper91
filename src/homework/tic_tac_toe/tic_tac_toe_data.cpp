//cpp
#include <fstream>
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>> &games)
{
    std::ofstream outFile;
    outFile.open("gamelist.txt");

    for(auto const& game : games)
    {
        std::vector<std::string> pegs = game->get_pegs();
        
        for(auto x : pegs)
            outFile << x;

        outFile << game->get_winner() << std::endl;
    }

    outFile.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    std::ifstream inFile;
    inFile.open("gamelist.txt");
    std::string line;
    std::vector<std::string> pegs;

    while(getline())
}