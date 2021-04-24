//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H
#include "tic_tac_toe.h"

class tiktaktoeGame3 : public tiktaktoeGame
{
public:
    tiktaktoeGame3() : tiktaktoeGame(3){}

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};

#endif