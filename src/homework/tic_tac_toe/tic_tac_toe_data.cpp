//cpp
#include <fstream>
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

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
    std::vector<std::unique_ptr<TicTacToe>> games;
    std::ifstream inFile;
    inFile.open("gamelist.txt");
    std::string line;

    while(getline(inFile, line))
    {
        std::vector<std::string> pegs;

        for(unsigned i = 0; i < line.size() - 1; i++)
        {
            std::string string(1, line[i]);
            pegs.push_back(string);
        }

        std::string winner(1, line[line.size()-1]);
        std::unique_ptr<TicTacToe> game;

        if(pegs.size()==9)
            game = std::make_unique<TicTacToe3>(pegs, winner);
        else if(pegs.size()==16)
            game = std::make_unique<TicTacToe4>(pegs, winner);

        games.push_back(std::move(game));
    }

    inFile.close();

    return games;
}