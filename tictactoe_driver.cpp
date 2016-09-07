#include <iostream>
#include "tictactoe.h"

using namespace std;

int main ()
{
	TicTacToe game1;
	game1.start();
	game1.print();
	while(1)
	{
		game1.turn=1;
		cout <<"\tTurn for PLAYER 1 ----->\n";
		game1.get_entries();
		game1.print();
		game1.whoisWinner();
		game1.turn=2;
		cout <<"\tTurn for PLAYER 2 ----->\n";
		game1.get_entries();
		game1.print();
		game1.whoisWinner();
	}
	return 0;
}
