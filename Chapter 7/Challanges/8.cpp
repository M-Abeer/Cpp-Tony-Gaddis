// Lo Shu Magic Square

#include<iostream>
using namespace std;
#include<iomanip>
const int ROW=3;
const int COLUMN=3;



int getRow(int grid[][COLUMN])
{
	int i,j,a,b,c;
	
	// Row
	
		int total;
	for(i=0;i<ROW;i++)
	{
		total=0;
		for(j=0;j<COLUMN;j++)
		{
			total+=grid[i][j];
		}
		cout<<"Row "<<(i+1)<<" sum is "<<total<<endl;
		
	}
		return total;
}
	
	
	
int getColumn(int grid[][COLUMN])
{
	
	int i,j;
	// Columns
	int sum;
	for(j=0;j<COLUMN;j++)
	{
		sum=0;
		for(i=0;i<ROW;i++)
		{
			sum+=grid[i][j];
			
		}
		cout<<"Column "<<(j+1)<<" sum is "<<sum<<endl;
	}
		return sum;
		cout<<"Sum is C"<<sum<<endl;
}



int leftDiagonal(int grid[][COLUMN])
{
	
		
	// Diagonals
	int i,j;
	int add=0;
	for(i=0;i<ROW;i++)
	{
		
		for(j=0;j<COLUMN;j++)
		{
			if(i==j)
			{
				add+=grid[i][j];
			}
		}
		
	}
	cout<<"Sum of Disgonal is "<<add<<endl;
	return add;
	// Matlab add=0 h..jab Jab Loop Dubara Chale gi Add Zero ho JAna
}



int rightDiagonal(int grid[][COLUMN])
{
	
		
	// Diagonals
	int i,j;
	int add=0;
	for(i=0;i<ROW;i++)
	{
		
		for(j=0;j<COLUMN;j++)
		{
			 if((i+j) == 3-1)   // For Diagonal Mtrix Must be Square if((i+j)==(size-1) // Logic
			{
				add+=grid[i][j];
			}
		}
		
	}
	cout<<"Sum of Disgonal is "<<add<<endl;
	return add;
}



int main()
{
	int a,b,c,d;
	
	
	int grid[ROW][COLUMN];
	int i,j;
	
	// Read Data and fill the Array
	cout<<"Enter Elements"<<endl;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			cin>>grid[i][j];
		}
	}
	
	a=getRow(grid);  // RowSum Each
	b=getColumn(grid);
	c=leftDiagonal(grid);
	d=rightDiagonal(grid);
	cout<<a<<endl;
	
	if(a==15&&b==15&&c==15&&d==15)
	{
		cout<<"It is Lo Shu Magic"<<endl;
	}
	else
	{
		cout<<"It is not a Lo Shu Magic"<<endl;	
	}	
	
	// Program Terminate
	return 0;
}


// As a whole Sum krwana ho to accumulator ko Lopp se bhrinitialize kraen ge zero se.. Us mei Phr Total Value
// Store ho gi... Agar matlab aik row ka sum lena ho ya Column ka to ham pehli loop k bad use Zero se initialize
// krwae ge ta ke aik return ya display krne k bad dubara value zero ho jae..Matlab Har Kisi ki pani Value Store ho
// Jaise ..........Age Khud Dekh lena...
