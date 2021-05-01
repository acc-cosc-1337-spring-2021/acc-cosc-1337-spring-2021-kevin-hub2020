//h
#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H
#include "tic_tac_toe.h"

class tiktaktoeGame4 : public tiktaktoeGame
{
public:
    tiktaktoeGame4() : tiktaktoeGame(4){}
    tiktaktoeGame4(std::vector<string> p, std::string winner): tiktaktoeGame(p, winner){}

private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;
};

#endif