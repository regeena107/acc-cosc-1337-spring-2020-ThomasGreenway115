//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H


#include"tic_tac_toe.h"
class tic_tac_toe_manager
{
public:
	void save_game(const TicTacToe b);
	friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe_manager& manager);

private:
	vector<TicTacToe> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(string winner);


};
#endif // !TIC_TAC_TOE_MANAGER_H