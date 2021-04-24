#include"tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<memory>

using std::cout;
using std::cin;

using std::unique_ptr;
using std::make_unique;

int main() 
{
	string player;
	TicTacToeManager manager;
	string playagain;
	int x = 0;
	int o = 0;
	int ties = 0;

		do
		{
			unique_ptr<tiktaktoeGame> game;
			string grid_type;
			
			do
			{
				cout<<"Would you like to play in 3x3(type 3) or 4x4(type 4) grid?: ";
				cin>>grid_type;
				cout<<"\n";

				if(grid_type == "3")
				{
					game = make_unique<tiktaktoeGame3>();
				}
				else if(grid_type == "4")
				{
					game = make_unique<tiktaktoeGame4>();
				}
			}
			while (!(grid_type == "3" || grid_type == "4")); 


			do
			{
				cout<<"You are challenged to a tic tac toe game, there's no other choice but to win...\n";
				cout<<"Type x or o to start the game huehuehuehue!: ";
				cin>>player;
				cout<<"\n";
			}
			while (!(player == "x" || player == "o"));
				game->start_game(player);
				cout<<*game;

			do
			{
				cin>> *game;
				cout<< *game;
			}
			while (!(game->game_over()));



			while(game->game_over() == false);

			if (game->get_winner() == "x")
			{
				x = x + 1;
			}

			if (game->get_winner() == "o")
			{
				o = o + 1;
			}

			else if (game->get_winner() == "C")
			{
				ties = ties + 1;
				cout<<"\nGame ended in a TIE~!\n";
			}
			else
			cout<<"\nGame Over! The winner is: "<<game->get_winner()<<"!\n";
			manager.save_game(game);

			manager.get_winner_total(x,o,ties);

			cout<<"\nX wins: "<<x<<"\n";
			cout<<"O wins: "<<o<<"\n";
			cout<<"Ties: "<<ties<<"\n";
			
			cout<<"\nPlay again? y/Y = yes, anything else = no: ";
			cin>>playagain;
			cout<<"\n";
		}
			
		while (playagain == "y" || playagain == "Y");
		cout<<"Gaming History: \n";
		cout<<"\n"<<manager;

		manager.get_winner_total(x,o,ties);

	return 0;
}