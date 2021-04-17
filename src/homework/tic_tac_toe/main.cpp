#include"tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>

using std::cout;
using std::cin;
//using std::string;

int main() 
{
	string player;
	TicTacToeManager manager;
	string playagain = "y";
	int x = 0;
	int o = 0;
	int ties = 0;

	while (playagain == "y" || playagain == "Y")
	{	
		tiktaktoeGame game;
		cout<<"\n";
		cout<<"You are challenged to a tic tac toe game, there's no other choice but to win...\n";
		cout<<"Type x or o to start the game huehuehuehue!: ";
		cin>>player;

		game.start_game(player);

		while (!(player == "x" || player == "o"))
		{
			cout<<"Error! Invalid input, choose x or o only!"<<"\n";
			cout<<"Type x or o to start the game huehuehuehue!: ";
			cin>>player;
			cout<<"\n";
			game.start_game(player);
		}


		do
		{
			cin>>game;
			cout<<game;
		}
		while(game.game_over() == false);

		if (game.get_winner() == "x")
		{
			x = x + 1;
		}

		if (game.get_winner() == "o")
		{
			o = o + 1;
		}

		else if (game.get_winner() == "C")
		{
			ties = ties + 1;
			cout<<"Game ended in a TIE~!\n";
		}
		else
		cout<<"\nGame Over! The winner is "<<game.get_winner()<<"!\n";
		cout<<"\nX wins: "<<x<<"\n";
		cout<<"O wins: "<<o<<"\n";
		cout<<"Ties: "<<ties<<"\n";
		manager.save_game(game);
		cout<<"\n";
		manager.get_winner_total(x,o,ties);
		cout<<"\nPlay again? y/Y = yes, anything else = no: ";
		cin>>playagain;
		cout<<"\n";
		cout<<manager;
	}

	return 0;
}