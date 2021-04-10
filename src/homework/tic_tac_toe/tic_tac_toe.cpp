//cpp
#include"tic_tac_toe.h"
#include<iostream>

using std::cout;

bool tiktaktoeGame::game_over()
{
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
    return false;
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

string tiktaktoeGame::get_winner()
{
    return winner;
}

bool tiktaktoeGame::check_column_win()
{
    ////bool win = false;

    //player x
    if (pegs[0] == "x" && pegs[3] == "x" && pegs[6] == "x")
    {
        ////win = true;
        return true;
    }
    //player o
    if (pegs[0] == "o" && pegs[3] == "o" && pegs[6] == "o")
    {
       // //win = true;
        return true;
    }
    //player x
    if (pegs[1] == "x" && pegs[4] == "x" && pegs[7] == "x")
    {
        ////win = true;
        return true;
    }
    //player o
    if (pegs[1] == "o" && pegs[4] == "o" && pegs[7] == "o")
    {
       // //win = true;
        return true;
    }
    //player x
    if (pegs[2] == "x" && pegs[5] == "x" && pegs[8] == "x")
    {
        ////win = true;
        return true;
    }
    //player o
    if (pegs[2] == "o" && pegs[5] == "o" && pegs[8] == "o")
    {
        ////win = true;
        return true;
    }
    return false;
}

bool tiktaktoeGame::check_row_win()
{
    //bool win = false;

    //player x
    if (pegs[0] == "x" && pegs[1] == "x" && pegs[2] == "x")
    {
        //win = true;
        return true;
    }
    //player o
    if (pegs[0] == "o" && pegs[1] == "o" && pegs[2] == "o")
    {
        //win = true;
        return true;
    }
    //player x
    if (pegs[3] == "x" && pegs[4] == "x" && pegs[5] == "x")
    {
        //win = true;
        return true;
    }
    //player o
    if (pegs[3] == "o" && pegs[4] == "o" && pegs[5] == "o")
    {
        //win = true;
        return true;
    }
    //player x
    if (pegs[6] == "x" && pegs[7] == "x" && pegs[8] == "x")
    {
        //win = true;
        return true;
    }
    //player o
    if (pegs[6] == "o" && pegs[7] == "o" && pegs[8] == "o")
    {
        //win = true;
        return true;
    }
    return false;
}

bool tiktaktoeGame::check_diagonal_win()
{
    //bool win = false;

    //player x
    if (pegs[0] == "x" && pegs[4] == "x" && pegs[8] == "x")
    {
        //win = true;
        return true;
    }
    //player o
    if (pegs[0] == "o" && pegs[4] == "o" && pegs[8] == "o")
    {
        //win = true;
        return true;
    }
    //player x
    if (pegs[2] == "x" && pegs[4] == "x" && pegs[6] == "x")
    {
        //win = true;
        return true;
    }
    //player o
    if (pegs[2] == "o" && pegs[4] == "o" && pegs[6] == "o")
    {
        //win = true;
        return true;
    }

    return false;
}

void tiktaktoeGame::set_winner()
{
    if (player == "x")
    {
        winner = "o";
    }
    else
    {
        winner = "x";
    }
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