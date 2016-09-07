class TicTacToe
{
	public:
		TicTacToe();
		int turn;
		void print();
		void start();
		void get_entries();
		void whoisWinner();
		int checkW(int array[][4],int turn);
		void verify (int player1[4][4],int player2[4][4],int player3[4][4],int np);
	private:
		int array1[4][4];
		int array2[4][4];
		int array3[4][4];
		int player11[4][4];
		int player12[4][4];
		int player13[4][4];
		int player21[4][4];
		int player22[4][4];
		int player23[4][4];
		int i1,i2,i3;
};
