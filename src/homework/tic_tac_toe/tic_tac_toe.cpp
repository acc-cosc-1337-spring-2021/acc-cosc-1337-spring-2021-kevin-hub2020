//cpp
#include"tic_tac_toe.h"
#include<iostream>

using std::cout;


std::ostream& operator<<(std::ostream& out, const tiktaktoeGame& game)
{
    if (game.pegs.size() == 9)
    {
        out<<game.pegs[0]<<" | "<<game.pegs[1]<<" | "<<game.pegs[2]<<"\n";
        out<<"--+---+--"<<"\n";
        out<<game.pegs[3]<<" | "<<game.pegs[4]<<" | "<<game.pegs[5]<<"\n";
        out<<"--+---+--"<<"\n";
        out<<game.pegs[6]<<" | "<<game.pegs[7]<<" | "<<game.pegs[8]<<"\n";
        return out;
    }
    else if (game.pegs.size() == 16)
    {
        out<<game.pegs[0]<<" | "<<game.pegs[1]<<" | "<<game.pegs[2]<<" | "<<game.pegs[3]<<"\n";
        out<<"--+---+---+--"<<"\n";
        out<<game.pegs[4]<<" | "<<game.pegs[5]<<" | "<<game.pegs[6]<<" | "<<game.pegs[7]<<"\n";
        out<<"--+---+---+--"<<"\n";
        out<<game.pegs[8]<<" | "<<game.pegs[9]<<" | "<<game.pegs[10]<<" | "<<game.pegs[11]<<"\n";
        out<<"--+---+---+--"<<"\n";
        out<<game.pegs[12]<<" | "<<game.pegs[13]<<" | "<<game.pegs[14]<<" | "<<game.pegs[15]<<"\n";
        return out;
    }
}

std::istream& operator>>(std::istream& in, tiktaktoeGame& game)
{
    //int position;
    if (game.pegs.size() == 9)
    {
        int position;

        do
        {
            cout<<"\nYour turn "<<game.get_player()<<"! Choose a free slot on the board using numbers from 1-9: ";
            in>>position;
            cout<<"\n";
        } while (position < 1 || position > 9);
        game.mark_board(position);
        return in;
    }
    else if (game.pegs.size() == 16)
    {
        int position;

        do
        {
            cout<<"\nYour turn "<<game.get_player()<<"! Choose a free slot on the board using numbers from 1-16: ";
            in>>position;
            cout<<"\n";
        } while (position < 1 || position > 16);
        game.mark_board(position);
        return in;
    }
}



bool tiktaktoeGame::game_over()
{
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win() == true)
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

string tiktaktoeGame::get_winner()
{
    return winner;
}

bool tiktaktoeGame::check_column_win()
{
    return false;
}

bool tiktaktoeGame::check_row_win()
{
    return false;
}

bool tiktaktoeGame::check_diagonal_win()
{
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