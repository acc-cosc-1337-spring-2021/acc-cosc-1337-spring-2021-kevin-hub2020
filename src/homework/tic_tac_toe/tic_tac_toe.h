//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<iostream>
#include<vector>
#include<string>
using std::cin;
using std::cout;
using std::string;
using std::vector;

class tiktaktoeGame
{
    friend std::ostream& operator<<(std::ostream& out, const tiktaktoeGame& game);
    friend std::istream& operator>>(std::istream& in, tiktaktoeGame& game);

    public:
        tiktaktoeGame(){}
        tiktaktoeGame(int size) : pegs(size*size, " "){}

        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const;
        string get_winner();
    

    protected:
        std::vector<std::string> pegs{};
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();

    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        string player;
        string  winner;
        void set_winner();
};

#endif