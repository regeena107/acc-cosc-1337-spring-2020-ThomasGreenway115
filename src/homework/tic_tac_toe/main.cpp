#include "tic_tac_toe.h"
using std::cout;
using std::cin;

int main() 
{
	try
	{
		string first_p = "";
		cout << "Choose X or O for first player: ";
		TicTacToe game;
		cin >> first_p;
		game.start_game(first_p);
		int end_game = 0;
		while (end_game == 0)
		{
			int position = 0;
			cout << "Enter a position between 1 and 9: ";
			cin >> position;
			game.mark_board(position);
			cout << "If you want to continue playing enter 0 if not enter nothing: ";
			cin >> end_game;
		}
	}
	catch (error b)
	{
		cout << b.get_message();
	}
	
	
	return 0;
}