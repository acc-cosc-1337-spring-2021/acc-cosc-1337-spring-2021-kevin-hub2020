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
TEST_CASE("Test check_colum_win with positions 2,5,8 for first player x", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("x");
	game.mark_board(2); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //x

	REQUIRE(game.game_over() == true);
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
}

//Test win by first row
TEST_CASE("Test check_row_win with positions 1,2,3 for first player x", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("x");
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //x

	REQUIRE(game.game_over() == true);
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
}

//Test win by third row
TEST_CASE("Test check_row_win with positions 7,8,9 for first player x", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("x");
	game.mark_board(7); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //x

	REQUIRE(game.game_over() == true);
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
}

//Test win diagonally from bottom left
TEST_CASE("Test check_diagonal_win with positions 7,5,3 for first player x", "should return game_over() == true")
{
	tiktaktoeGame game;
	game.start_game("x");
	game.mark_board(7); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //x

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test get_winner_")