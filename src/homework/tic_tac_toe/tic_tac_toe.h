//h
#include <iostream>
using std::string;
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
	
	void mark_board(int postion);

	string get_player()const;
private:
	void set_next_player();

	string player;



};