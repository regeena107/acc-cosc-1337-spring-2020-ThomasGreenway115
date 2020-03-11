//cpp
#include "tic_tac_toe.h"
using std::cout;

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else if (first_player != "X" && first_player != "O")
	{
		throw error("\n Player must be X or O.");
	}
	else
	{
		clear_board();
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
		pegs[position - 1] = player;
	}
	set_next_player();
}

bool TicTacToe::game_over()
{
	return check_board_full();
}


void TicTacToe::display_board() const
{
	cout << "\n";
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
		
	}
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

bool TicTacToe::check_board_full()
{
	for (auto peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}
