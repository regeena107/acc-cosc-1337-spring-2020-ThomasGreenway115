#include "tic_tac_toe.h"
using std::cout;
using std::cin;

int main() 
{
	string first_p = "X";
	TicTacToe game;
	while (!(first_p == "O" || first_p == "X"))
	{
		try 
		{
			cout << "Choose X or O for first player: ";
			cin >> first_p;
			game.start_game(first_p);
			cout << "Enter a letter that is not X or O to finish";
		}
		catch (error b)
		{
			cout << b.get_message();
		}
		
	}
	
	do
	{
		int position = 0;
		cout << "Enter a position between 1 and 9: ";
		cin >> position;
		game.mark_board(position);
		cout << "If you want to continue playing enter 0 if not enter nothing: ";
		game.display_board();

	} while (!game.game_over());
	
	
	return 0;
}