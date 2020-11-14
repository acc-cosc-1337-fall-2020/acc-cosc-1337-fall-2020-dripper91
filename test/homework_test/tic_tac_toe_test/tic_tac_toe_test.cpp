#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	TicTacToe3 test;
	test.start_game("X");
	REQUIRE(test.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe3 test;
	test.start_game("O");
	REQUIRE(test.get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected.")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(5);
	REQUIRE(!test.game_over());

	test.mark_board(1);
	REQUIRE(!test.game_over());

	test.mark_board(7);
	REQUIRE(!test.game_over());

	test.mark_board(3);
	REQUIRE(!test.game_over());

	test.mark_board(2);
	REQUIRE(!test.game_over());

	test.mark_board(8);
	REQUIRE(!test.game_over());

	test.mark_board(4);
	REQUIRE(!test.game_over());

	test.mark_board(6);
	REQUIRE(!test.game_over());

	test.mark_board(9);
	REQUIRE(test.game_over());
	REQUIRE(test.get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(4);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(7);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by second column")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(5);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(8);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by third column")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(6);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(9);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by first row")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(4);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(5);
	REQUIRE(!test.game_over());
	test.mark_board(3);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by second row")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(4);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(5);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(6);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by third row")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(7);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(8);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(9);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win diagonally from top left")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(5);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(9);

	REQUIRE(test.game_over());
}

TEST_CASE("Test win diagonally from bottom left")
{
	TicTacToe3 test;

	test.start_game("X");

	test.mark_board(7);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(5);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(3);

	REQUIRE(test.game_over());
}

TEST_CASE("Test first player set to X 4")
{
	TicTacToe4 test;
	test.start_game("X");
	REQUIRE(test.get_player() == "X");
}

TEST_CASE("Test first player set to O 4")
{
	TicTacToe4 test;
	test.start_game("O");
	REQUIRE(test.get_player() == "O");
}

TEST_CASE("Test game over if 16 slots are selected. 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(1);
	REQUIRE(!test.game_over());

	test.mark_board(2);
	REQUIRE(!test.game_over());

	test.mark_board(3);
	REQUIRE(!test.game_over());

	test.mark_board(4);
	REQUIRE(!test.game_over());

	test.mark_board(5);
	REQUIRE(!test.game_over());

	test.mark_board(6);
	REQUIRE(!test.game_over());

	test.mark_board(7);
	REQUIRE(!test.game_over());

	test.mark_board(8);
	REQUIRE(!test.game_over());

	test.mark_board(9);
	REQUIRE(!test.game_over());

	test.mark_board(10);
	REQUIRE(!test.game_over());

	test.mark_board(11);
	REQUIRE(!test.game_over());

	test.mark_board(12);
	REQUIRE(!test.game_over());

	test.mark_board(14);
	REQUIRE(!test.game_over());

	test.mark_board(15);
	REQUIRE(!test.game_over());

	test.mark_board(16);
	REQUIRE(!test.game_over());

	test.mark_board(13);
	REQUIRE(test.game_over());
	REQUIRE(test.get_winner() == "C");
}

TEST_CASE("Test win by first column 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(5);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(9);
	REQUIRE(!test.game_over());
	test.mark_board(4);
	REQUIRE(!test.game_over());
	test.mark_board(13);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by second column 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(6);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(10);
	REQUIRE(!test.game_over());
	test.mark_board(4);
	REQUIRE(!test.game_over());
	test.mark_board(14);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by third column 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(7);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(11);
	REQUIRE(!test.game_over());
	test.mark_board(4);
	REQUIRE(!test.game_over());
	test.mark_board(15);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by fourth column 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(4);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(8);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(12);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(16);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by first row 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(5);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(6);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(7);
	REQUIRE(!test.game_over());
	test.mark_board(4);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by second row 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(5);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(6);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(7);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(8);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by third row 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(9);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(10);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(11);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(12);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win by fourth row 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(13);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(14);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(15);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(16);

	REQUIRE(test.game_over());

	REQUIRE(test.get_winner()=="X");
}

TEST_CASE("Test win diagonally from top left 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(6);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(11);
	REQUIRE(!test.game_over());
	test.mark_board(4);
	REQUIRE(!test.game_over());
	test.mark_board(16);

	REQUIRE(test.game_over());
}

TEST_CASE("Test win diagonally from bottom left 4")
{
	TicTacToe4 test;

	test.start_game("X");

	test.mark_board(13);
	REQUIRE(!test.game_over());
	test.mark_board(1);
	REQUIRE(!test.game_over());
	test.mark_board(10);
	REQUIRE(!test.game_over());
	test.mark_board(2);
	REQUIRE(!test.game_over());
	test.mark_board(7);
	REQUIRE(!test.game_over());
	test.mark_board(3);
	REQUIRE(!test.game_over());
	test.mark_board(4);

	REQUIRE(test.game_over());
}