//h
#include <iostream>
#include<string>
using std::string;
#include<vector>
using std::vector;
class error
{
public:
	error(string msg) : message{ msg } {};
	
	string get_message() { return message; };


private:
	string message;

};
class TicTacToe
{
public:
	void start_game(string first_player);
	
	void mark_board(int position);

	string get_player()const { return player; };

	bool game_over();

	void display_board()const;

	string get_winner() { return winner; };
private:
	void set_next_player();

	string player;

	bool check_board_full();

	vector<string> pegs{ 9, " " };

	void clear_board();

	bool check_column_win();

	bool check_row_win();

	bool check_diagonal_win();

	void set_winner();

	string winner;
};