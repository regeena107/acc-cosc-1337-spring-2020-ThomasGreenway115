#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test can't call mark board before start game")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.mark_board(1), error);
}
TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.start_game("R"), error);
}
TEST_CASE("Test set first player to X")
{
	start_game("X");
	REQUIRE(get_player() == "X");
}
TEST_CASE("Test set first player to O")
{
	start_game("O");
	REQUIRE(get_player() == "O");
}
TEST_CASE("Test Start game with X game flow")
{
	TicTacToe game;
	start_game("X");
	REQUIRE(get_player() == "X");
	mark_board(4);
	REQUIRE(get_player() == "O")

}
TEST_CASE("Test start game with O game flow")
{
	TicTacToe game;
	start_game("O");
	REQUIRE(get_player() == "O");
	mark_board(2);
	REQUIRE(get_player() == "X");
}
