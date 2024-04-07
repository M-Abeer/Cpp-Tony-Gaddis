
// Tic Tac Toe Game
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
#include<cmath>
#include<ctime>


// Constants
const int ROW=3;
const int COLUMN=3;
const char x='X';
const char o='O';

	
int main()
{
	
	char board[ROW][COLUMN]={'1','2','3',
							 '4','5','6',
							 '7','8','9'};
	
							 
	int i,j;
	
	
	
	//Rander Game Board LAYOUT
	cout<<"\t\tTIC TAC TOE GAME\n\n";
	cout<<"Player1[X]";
	cout<<endl;
	cout<<"Player2[O]\n";
	
	// Game Board
	
		// Game Board
	
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  1  |  2  |  3  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |		\n";
	cout<<"\t\t  4  |  5  |  6 	\n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |		\n";
	cout<<"\t\t  7  |  8  |  9 	\n";	
	cout<<"\t\t     |     |		\n";
		
		
	int r,c;
	int choice;
	cout<<endl<<endl;
	
	
	
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |		\n";
	cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" 	\n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |		\n";
	cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" 	\n";	
	cout<<"\t\t     |     |		\n";	
	
	
	
	// Put Data in Board
	// Player 1
	cout<<"Player 1[X] turn "<<endl;
	cout<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	// As we start index from 0 that why r-1 and c-1
	board[r-1][c-1]=x;	
	
	// Player 2
	cout<<"Player 2[O] turn "<<endl<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	
	board[r-1][c-1]=o;
	
	// Player 1
	cout<<"Player 1[X] turn "<<endl;
	cout<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	// As we start index from 0 that why r-1 and c-1
	board[r-1][c-1]=x;	
	
	// Player 2
	cout<<"Player 2[O] turn "<<endl<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	
	board[r-1][c-1]=o;
	
	
	// Player 1
	cout<<"Player 1[X] turn "<<endl;
	cout<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	// As we start index from 0 that why r-1 and c-1
	board[r-1][c-1]=x;	
	
	// Player 2
	cout<<"Player 2[O] turn "<<endl<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	
	board[r-1][c-1]=o;
	
	
	// Player 1
	cout<<"Player 1[X] turn "<<endl;
	cout<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	// As we start index from 0 that why r-1 and c-1
	board[r-1][c-1]=x;	
	
	// Player 2
	cout<<"Player 2[O] turn "<<endl<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	
	board[r-1][c-1]=o;
	
	
	
	// Player 1
	cout<<"Player 1[X] turn "<<endl;
	cout<<endl;
	cout<<"Enter Row Location"<<endl;
	cin>>r;
	cout<<"Enter Column Location"<<endl;
	cin>>c;
	// As we start index from 0 that why r-1 and c-1
	board[r-1][c-1]=x;	
	// Turns Complete
	
	
	// Display X and O
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |		\n";
	cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" 	\n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |		\n";
	cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" 	\n";	
	cout<<"\t\t     |     |		\n";	
	
	
	
	
	//--------------------------------------------------------------------
	// ROWS
	// First Row
	// First Player
	int f=0;
	for(i=0;i<ROW-2;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(board[i][j]==x)
			{
				f++;					
			}
		}
	}
	if(f==3)
	{
		cout<<"Player 1 Wins r1"<<endl;
	}
	
	
	// First Row
	// Second Player
	int s=0;
	for(i=0;i<ROW-2;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(board[i][j]==o)
			{
				s++;					
			}
		}
	}
	if(s==3)
	{
		cout<<"Player 2 Wins r1"<<endl;
	}
	
	//--------------------------------------------------------
	
	
	
	// Second Row
	// First Player
	
	
	int x=0;
	for(i=1;i<ROW-1;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(board[i][j]==x)
			{
				x++;					
			}
		}
	}
	if(x==3)
	{
		cout<<"Player 1 Wins r2"<<endl;
	}
	
	
	// Second Row
	// Second Player
	int y=0;
	for(i=1;i<ROW-1;i++)
	{
		for(j=1;j<COLUMN;j++)
		{
			if(board[i][j]==o)
			{
				y++;					
			}
		}
	}
	if(y==3)
	{
		cout<<"Player 2 Wins r2"<<endl;
	}	
	
	//---------------------------------------------------------------------
	
	
	
	// Third Row
	// Player 1
	int q=0;
	for(i=2;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(board[i][j]==x)
			{
				q++;					
			}
		}
	}
	if(q==3)
	{
		cout<<"Player 1 Wins r3"<<endl;
	}
	
	
	// Third Row
	// Second Player
	int w=0;
	for(i=2;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(board[i][j]==o)
			{
				w++;					
			}
		}
	}
	if(w==3)
	{
		cout<<"Player 2 Wins r3"<<endl;
	}
	
	//-------------------------------------------------------------------------
	
	
	
	//------------------------------------------------------------
	// Left Diagonal
	//X
	int e=0;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(i==j)
			{
				//board[i][j]==x;
				{
					if(board[i][j]==x)
						e++;
				}
			}					
		}
	}
	if(e==3)
	{
		cout<<"Player 1 Wins ld"<<endl;
	}
	
	
	//O
	int g=0;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(i==j)
			{
				if(board[i][j]==o)
				//board[i][j]==o;
					g++;	
			}		
		}
	}
	if(g==3)
	{
		cout<<"Player 2 wins ld"<<endl;
	}
	// ----------------------------------------------------------
	
	// Columns and Right Diagonal Remaining
	// and Game Draw Logic
	
	
	
	
	
	// First Columnn
	// Player 1
	int n=0,m=0;
	for(j=0;j<COLUMN-2;j++)
	{
		for(i=0;i<ROW;i++)
		{
			if(board[i][j]==x)
			{
				n++;
			}		
			
		}
	}
	if(n==3)
	{
		cout<<"Player 1 wins c1"<<endl;
	}
	
	// Player 2
	
	
	for(j=0;j<COLUMN-2;j++)
	{
		for(i=0;i<ROW;i++)
		{
			if(board[i][j]==x)
			{
				m++;
			}		
			
		}
	}
	if(m==3)
	{
		cout<<"Player 2 wins c1"<<endl;
	}
	
	
	// Second Column
	
	// Player 1
	int d=0,z=0;
	for(j=1;j<COLUMN-1;j++)
	{
		for(i=0;i<ROW;i++)
		{
			if(board[i][j]==x)
			{
				d++;
			}		
			
		}
	}
	if(d==3)
	{
		cout<<"Player 1 wins c2"<<endl;
	}
	
	// Player 2
	
	
	for(j=1;j<COLUMN-1;j++)
	{
		for(i=0;i<ROW;i++)
		{
			if(board[i][j]==x)
			{
				z++;
			}		
			
		}
	}
	if(z==3)
	{
		cout<<"Player 2 wins c2"<<endl;
	}
	//
	
	
	// Column 3
	
	// Player 1
	int h=0,b=0;
	for(j=2;j<COLUMN;j++)
	{
		for(i=0;i<ROW;i++)
		{
			if(board[i][j]==x)
			{
				h++;
			}		
			
		}
	}
	if(h==3)
	{
		cout<<"Player 1 wins c3"<<endl;
	}
	
	// Player 2
	
	
	for(j=2;j<COLUMN;j++)
	{
		for(i=0;i<ROW;i++)
		{
			if(board[i][j]==x)
			{
				b++;
			}		
			
		}
	}
	if(b==3)
	{
		cout<<"Player 2 wins c3"<<endl;
	}
	
	//-------------------------------------------------------------------------------
	
	
	
	// Now Right Diagonal
	// Player 1
	
	int a=0;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(i+j==3-1)
			{
				//board[i][j]=x;
				if(board[i][j]=x)
					a++;		
			}
		}
	}
	if(a==3)
	{
		cout<<"Player 1 Wins rd"<<endl;
	}
	
	
	//Player 2
	int t;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(i+j==3-1)
			{
				if(board[i][j]=0)
					t++;		
			}
		}
	}
	if(t==3)
	{
		cout<<"Player 2 Wins rd"<<endl;
	}
	
	// ------------------------------------------------------------
	// Done
	
	
	
}
