#include"tic_tac_toe.h"
#include<iostream>

using std::cin;
using std::cout;
using std::string;

int main() 
{
	tiktaktoeGame game;
	string player;
	int position;

	cout<<"You are challenged to a tic tac toe game, there's no other choice but to win...\n";
	cout<<"Type x or o to start the game huehuehuehue!: ";
	cin>>player;
	cout<<"\n";

	game.start_game(player);
	game.display_board();

	do
	{
		cout<<"\nYour turn "<<game.get_player()<<"! Choose a free slot on the board using numbers from 1-9: ";
		cin>>position;
		cout<<"\n";
		game.mark_board(position);
		game.display_board();

	} while (game.game_over() == false);

	cout<<"\nGame Over! HAHAHAHA!!! Did you won?";
	
	return 0;
}