#include "tictactoe.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void check1(int &a,int &b)
{
	while (a<0 || a>4 || b<0 ||b>4)
	{
			cout <<"row and column # must be > 0 and < 5"<<endl;
			cout <<"Enter the row #: ";
			cin>>a;
			cout <<"Enter the column #: ";
			cin>>b;
			cout <<endl;
	}
}

int TicTacToe::checkW(int array[][4],int turn)
{
	int i,j,a;
	for (i=0;i<4;i++)
	{
		
		if (array[i][0]==array[i][1]==array[i][2]==array[i][3]=turn)
			return a=turn;
	}
	for (j=0;j<4;j++)
	{
		if (array[0][j]==array[1][j]==array[2][j]==array[3][j]=turn)
			return a=turn;
	}
	//for (i=0;i<4;i++)
	if (array[0][0]==array[1][1]==array[2][2]==array[3][3])
		return a=turn;
	if (array[0][3]==array[1][2]==array[2][1]==array[3][0])
		return a=turn;
}


TicTacToe::TicTacToe()
{
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			array1[i][j]=0;
			array2[i][j]=0;
			array3[i][j]=0;
			player11[i][j]=0;
			player12[i][j]=0;
			player13[i][j]=0;
			player21[i][j]=0;
			player22[i][j]=0;
			player23[i][j]=0;
		}
	}
}

void TicTacToe::print()
{
	cout <<endl;
	cout <<"                 _ _ _ _ _ _ _ _"<<endl;
	printf("               / %d / %d / %d / %d /\\ \n",array1[0][0],array1[0][1],array1[0][2],array1[0][3]);
	printf("              /_ _/_ _/_ _/_ _/%d \\ \n",array3[0][3]);
	printf("             / %d / %d / %d / %d /\\  /\\ \n",array1[1][0],array1[1][1],array1[1][2],array1[1][3]);
	printf("            /_ _/_ _/_ _/_ _/%d \\/%d \\ \n",array3[0][2],array3[1][3]);
	printf("           / %d / %d / %d / %d /\\  /\\  /\\ \n",array1[2][0],array1[2][1],array1[2][2],array1[2][3]);
	printf("          /_ _/_ _/_ _/_ _/%d \\/%d \\/ %d\\ \n",array3[0][1],array3[1][2],array3[2][3]);	
	printf("         / %d / %d / %d / %d /\\  /\\  /\\  /\\ \n",array1[3][0],array1[3][1],array1[3][2],array1[3][3]);
	printf("        /_ _/_ _/_ _/_ _/%d \\/%d \\/%d \\/ %d\\ \n",array3[0][0],array3[1][1],array3[2][2],array3[3][3]);
	printf("        \\ %d \\ %d \\ %d \\ %d \\  /\\  /\\  /\\  / \n",array2[0][0],array2[0][1],array2[0][2],array2[0][3]);
	printf("         \\_ _\\_ _\\_ _\\_ _\\/%d \\/%d \\/  \\/ \n",array3[1][0],array3[2][1]);
	printf("          \\ %d \\ %d \\ %d \\ %d \\  /\\  /\\ %d/ \n",array2[1][0],array2[1][1],array2[1][2],array2[1][3],array3[3][2]);
	printf("           \\_ _\\_ _\\_ _\\_ _\\/%d \\/  \\/ \n",array3[2][0]);
	printf("            \\ %d \\ %d \\ %d \\ %d \\  /\\ %d/  \n",array2[2][0],array2[2][1],array2[2][2],array2[2][3],array3[3][1]);
	printf("             \\_ _\\_ _\\_ _\\_ _\\/  \\/ \n");
	printf("              \\ %d \\ %d \\ %d \\ %d \\ %d/    \n",array2[3][0],array2[3][1],array2[3][2],array2[3][3],array3[3][0]);
	printf("               \\_ _\\_ _\\_ _\\_ _\\/  \n");
	cout <<endl;
}

void TicTacToe::start()
{
	cout<<"\n\n\t\tBienvenudo \tTic Tac Toe GAME\n\n\n";
	
}

int interface;

void TicTacToe::get_entries()
{
	int i,j,u=0;
	while (u==0) {
	cout <<"interface 1:"<<endl;
	cout <<"   	    _ _"<<endl;
	cout <<" 	  /   /"<<endl;
	cout <<"	 /_ _/"<<endl;
	cout <<"interface 2:"<<endl;
	cout <<"    	   _ _"<<endl;
	cout <<"  	  \\   \\"<<endl;
	cout <<"   	   \\_ _\\"<<endl;
	cout <<"interface 3:"<<endl;
	cout <<" 	  /\\"<<endl;
	cout <<"	 /  \\"<<endl;
	cout <<"	 \\  /"<<endl;
	cout <<"	  \\/"<<endl;
	cout <<"Enter the coordinates corresponding to ur move"<<endl;
	cout <<"choose the interface :";
	cin >>interface;
	switch(interface)
	{
		case 1:
			if (turn=1)
			{
				check1(i,j);
				array1[i-1][j-1]=1;
				player11[i-1][j-1]=1;
			}
			else if (turn = 2)
			{
				check1(i,j);
				array1[i-1][j-1]=2;
				player21[i-1][j-1]=2;
			}
			i=0;j=0;u=1;
		break;
		case 2:
			if (turn=1)
			{
				check1(i,j);
				array2[i-1][j-1]=1;
				player12[i-1][j-1]=1;
			}
			else if (turn = 2)
			{
				check1(i,j);
				array2[i-1][j-1]=2;
				player22[i-1][j-1]=2;
			}
			i=0;j=0;u=1;
		break;
		case 3:
			if (turn =1)
			{
				check1(i,j);
				array3[i-1][j-1]=1;
				player13[i-1][j-1]=1;
			}
			else if (turn=2)
			{
				check1(i,j);
				array3[i-1][j-1]=2;
				player23[i-1][j-1]=2;
			}
			i=0;j=0;u=1;
		break;
		default:
			cout <<"\n\t\tWRONG INTERFACE!!!TRY AGAIN\n\n";
			u=0;
		break;
	}
	}
}

//void TicTacToe::whoisWinner()
//{
void TicTacToe::verify(int player1[4][4],int player2[4][4],int player3[4][4],int np)
{
	int winner,w1=0;
	winner=checkW(player1,turn);
	if (winner==1)
	
		printf ("Player %d Wins on interface 1\n",np);
		w1 +=1;
	}
	winner=checkW(player2,turn);
	if (winner==1)
	{
		printf ("Player %d Wins on interface 2\n",np);
		w1 +=1;
	}
	winner=checkW(player3,turn);
	if (winner==1)
	{
		printf ("Player %d Wins on interface 3\n",np);
		w1 +=1;
	}
	if (w1==3)
	{
		printf ("Player %d Wins the GAME\n\n",np);
		exit (0);
	}
}

void TicTacToe::whoisWinner()
{
	verify(player11,player12,player13,1);
	verify (player21,player22,player23,2);
}
