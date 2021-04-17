//cpp
#include "tic_tac_toe_manager.h"

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto game: manager.games)
    {
        out<<game<<"\n";
    }
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";

    return out;
}

void TicTacToeManager::save_game(tiktaktoeGame b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{    
    cout<<"X wins: "<<x<<"\n";
    cout<<"O wins: "<<o<<"\n";
    cout<<"Ties: "<<t<<"\n";
}

void TicTacToeManager::update_winner_count(string winner)
{
    x_win = 0;
    o_win = 0;
    ties = 0;
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