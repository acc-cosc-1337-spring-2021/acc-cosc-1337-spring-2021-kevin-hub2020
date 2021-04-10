#include"tic_tac_toe.h"
#include<iostream>

using std::cin;
using std::cout;
using std::string;

int main() 
{
	string player;
	string playagain = "y";
	int position;

	while (playagain == "y" || playagain == "Y")
	{	
		tiktaktoeGame game;
		cout<<"You are challenged to a tic tac toe game, there's no other choice but to win...\n";
		cout<<"Type x or o to start the game huehuehuehue!: ";
		cin>>player;
		cout<<"\n";

		game.start_game(player);
		game.display_board();

		while (!(player == "x" || player == "o"))
		{
			cout<<"Error! Invalid input, choose x or o only!"<<"\n";
			cout<<"Type x or o to start the game huehuehuehue!: ";
			cin>>player;
			cout<<"\n";
			game.start_game(player);
			game.display_board();
		}
		
	
		while (game.game_over() == false)
		{
			cout<<"\nYour turn "<<game.get_player()<<"! Choose a free slot on the board using numbers from 1-9: ";
			cin>>position;
			cout<<"\n";
			while (position < 1 || position > 9)
			{
				cout<<"Invalid input! Please try again, Choose a free slot on the board using numbers from 1-9: ";
				cin>>position;
				cout<<"\n";
			}
			game.mark_board(position);
			game.display_board();
		}

		if (game.get_winner() == "C")
		{
			cout<<"Game ended in a TIE~!";
		}
		else
		cout<<"\nGame Over! The winner is "<<game.get_winner()<<"!";
		cout<<"\nPlay again? y/Y = yes, anything else = no: ";
		cin>>playagain;
		cout<<"\n";
	}

	return 0;
}