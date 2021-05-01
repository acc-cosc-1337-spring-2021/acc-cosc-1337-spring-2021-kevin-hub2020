//cpp
#include "tic_tac_toe_manager.h"
#include<iostream>

TicTacToeManager::TicTacToeManager(TicTacToeData& d) : data{d}
{
    games = data.get_games();

    for (auto& game:games)
    {
        update_winner_count(game->get_winner());
    }
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto& game : manager.games)
    {
        out<< *game<<"\n";
    }
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";

    return out;
}

TicTacToeManager::~TicTacToeManager()
{
    std::cout<<"\nGame Saved!\n";
    data.save_games(games);
}

void TicTacToeManager::save_game(unique_ptr<tiktaktoeGame> &b)
{
    update_winner_count(b -> get_winner());
    games.push_back(std::move(b));
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{    
    x = x_win;
    o = o_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "x")
    {
        x_win +=1;
    }
    else if (winner == "o")
    {
        o_win +=1;
    }
    else if (winner == "C")
    {
        ties =+1;
    }
}