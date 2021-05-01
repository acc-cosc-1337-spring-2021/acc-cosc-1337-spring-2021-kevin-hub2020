//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H
#include "tic_tac_toe.h"

class tiktaktoeGame3 : public tiktaktoeGame
{
public:
    tiktaktoeGame3() : tiktaktoeGame(3){}
    tiktaktoeGame3(std::vector<string> p, std::string winner): tiktaktoeGame(p, winner){}

private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;
};

#endif