//h
#include "tic_tac_toe.h"
#include<vector>
#include<iostream>
#ifndef TIC_TAC_TOE_MANAGER
#define TIC_TAC_TOE_MANAGER


class TicTacToeManager
{
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

    public:
    void save_game(tiktaktoeGame b);
    void get_winner_total(int& o, int& x, int& t);

    private:
    vector<tiktaktoeGame>games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);
};


#endif