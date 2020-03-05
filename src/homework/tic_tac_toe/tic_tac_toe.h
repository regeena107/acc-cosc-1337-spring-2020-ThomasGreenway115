//h
#include <iostream>
#include<string>
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
	
	void mark_board(int position);

	string get_player()const { return player; };
private:
	void set_next_player();

	string player;



};