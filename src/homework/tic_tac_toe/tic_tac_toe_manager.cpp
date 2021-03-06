#include"tic_tac_toe_manager.h"


void tic_tac_toe_manager::save_game(const TicTacToe b)
{
	games.push_back*(b);
	update_winner_count(b.get_winner);
}

void tic_tac_toe_manager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win += 1;
	}
	else if (winner == "O")
	{
		o_win += 1;
	}
	else
	{
		ties += 1;
	}
}

std::ostream & operator<<(std::ostream& out, const tic_tac_toe_manager& manager)
{
	for (auto &game : manager.games)
	{
		game.display_board();
	}
	out << "Times X has won: " << manager.x_win << "\n";
	out << "Times O has won: " << manager.o_win << "\n";
	out << "Times the outcome was a tie. " << manager.ties << "\n";
	return out;
}
