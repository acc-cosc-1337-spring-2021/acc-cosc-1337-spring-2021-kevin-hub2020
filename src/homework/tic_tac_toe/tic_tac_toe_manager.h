//h
#include "tic_tac_toe.h"
#include<vector>
#include<iostream>
#include<memory>
#ifndef TIC_TAC_TOE_MANAGER
#define TIC_TAC_TOE_MANAGER

using std::unique_ptr;
using std::make_unique;

class TicTacToeManager
{
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

    public:
    void save_game(unique_ptr<tiktaktoeGame> &b);
    void get_winner_total(int& o, int& x, int& t);

    private:
    std::vector<std::unique_ptr<tiktaktoeGame>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(std::string winner);
};


#endif