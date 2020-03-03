//cpp
#include "tic_tac_toe.h"

void TicTacToe::start_game(string first_player)
{
	if (first_player != "X" || first_player != "O")
	{
		throw error("\n Player must be X or O.");
	}
	else
	{
		player = first_player;
	}
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw error("\n Position must be 1 to 9.");
	}
	else if (player == "")
	{
		throw error("\n Must start game first.");
	}
	else
	{
		set_next_player();
	}
}
string TicTacToe::get_player() const
{
	return player;
}
void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";
	}
}
