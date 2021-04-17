#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//Tic tac toe game tests
TEST_CASE("Test Game Over if 9 slots are selected.")
{
	tiktaktoeGame game;

	game.start_game("x");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
}

//Test first player set to x
TEST_CASE("Test first player set to x","should return x == x")
{
	tiktaktoeGame game;
	game.start_game("x");
	REQUIRE(game.get_player() == "x");
}

//Test first player set to o
TEST_CASE("Test first player set to o","should return o == o")
{
	tiktaktoeGame game;
	game.start_game("o");
	REQUIRE(game.get_player() == "o");
}

//Test win by first column
TEST_CASE("Test check_colum_win with positions 1,4,7 for first player x", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("x");
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //x

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}

//Test win by second column
TEST_CASE("Test check_colum_win with positions 2,5,8 for first player o", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("o");
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //o

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "o");
}

//Test win by third column
TEST_CASE("Test check_colum_win with positions 3,6,9 for first player x", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("x");
	game.mark_board(3); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //x

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}

//Test win by first row
TEST_CASE("Test check_row_win with positions 1,2,3 for first player o", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("o");
	game.mark_board(1); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "o");
}

//Test win by second row
TEST_CASE("Test check_row_win with positions 4,5,6 for first player x", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("x");
	game.mark_board(4); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //x

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}

//Test win by third row
TEST_CASE("Test check_row_win with positions 7,8,9 for first player o", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("o");
	game.mark_board(7); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //o

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "o");
}

//Test win diagonally from top left
TEST_CASE("Test check_diagonal_win with positions 1,5,9 for first player x", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("x");
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //x

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}

//Test win diagonally from bottom left
TEST_CASE("Test check_diagonal_win with positions 7,5,3 for first player o", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("o");
	game.mark_board(7); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //o

	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "o");
}

TEST_CASE("Test get_winner_total")
{
	int x = 0;
	int o = 0;
	int ties = 0;
	TicTacToeManager manager;
	tiktaktoeGame game1;
	
	//game tie
	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(3);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(4);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(7);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(6);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(9);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(8);
	REQUIRE(game1.game_over() == true);
	REQUIRE(game1.get_winner() == "C");
	manager.save_game(game1);
	manager.get_winner_total(x,o,ties);

	
	// player x wins
	tiktaktoeGame game2;
	game2.start_game("x");
	game2.mark_board(1); //x
	REQUIRE(game2.game_over() == false);
	game2.mark_board(2); //o
	REQUIRE(game2.game_over() == false);
	game2.mark_board(5); //x
	REQUIRE(game2.game_over() == false);
	game2.mark_board(4); //o
	REQUIRE(game2.game_over() == false);
	game2.mark_board(9); //x
	REQUIRE(game2.game_over() == true);
	REQUIRE(game2.get_winner() == "x");
	manager.save_game(game2);
	manager.get_winner_total(x,o,ties);
	
	// player o wins
	tiktaktoeGame game3;
	game3.start_game("o");
	game3.mark_board(7); //o
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2); //x
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5); //o
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4); //x
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3); //o

	REQUIRE(game3.game_over() == true);
	REQUIRE(game3.get_winner() == "o");
	manager.save_game(game3);
	manager.get_winner_total(x,o,ties);


	manager.get_winner_total(x,o,ties);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(ties == 1);
}