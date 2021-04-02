//cpp
#include"tic_tac_toe.h"
#include<iostream>

using std::cout;

bool tiktaktoeGame::game_over()
{
    return check_board_full();
}

void tiktaktoeGame::start_game(string first_player)
{
    player = first_player;
    clear_board();
}
void tiktaktoeGame::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string tiktaktoeGame::get_player()const
{
    return player;
}

void tiktaktoeGame::display_board()const
{
    cout<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<"\n";
    cout<<"--+---+--"<<"\n";
    cout<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<"\n";
    cout<<"--+---+--"<<"\n";
    cout<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<"\n";    
}

void tiktaktoeGame::set_next_player()
{
    if (player == "x")
    {
        player = "o";
    }
    else
        player = "x";
}

bool tiktaktoeGame::check_board_full()
{
    bool is_full = true;
    for (std::size_t i = 0; i < pegs.size(); ++i)
    {
        if (pegs[i] == " ")
        {
            is_full = false;
            break;
        }
        
    }
    return is_full;
}

void tiktaktoeGame::clear_board()
{
    for (std::size_t i = 0; i < pegs.size(); ++i)
    {
        pegs [i] == " ";
    }
    
}