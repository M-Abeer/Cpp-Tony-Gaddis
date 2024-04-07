// Exsmple 7.22
#include<iostream>
using namespace std;
#include<iomanip>

// Global Constants
const int COLS=4; // Number of Column in each Array
const int TBL1_ROWS=3; // Number of Rows in Table 1
const int TBL2_ROWS=4; // Number of Rows in table 2

void showArray(const int [][COLS],int); // Function ProtoType

int main()
{
	int table1[TBL1_ROWS][COLS]={1,2,3,4,
								 5,6,7,8,
								 9,10,11,12};
								 
	int table2[TBL2_ROWS][COLS]={10,20,30,40,
								 50,60,70,80,
								 90,100,110,120,
								 130,140,150,160};
								 
	cout<<"The Contents of Table 1 is ";
	cout<<endl;
	showArray(table1,TBL1_ROWS);
	
	cout<<"The Contents of Table 2 is ";
	cout<<endl;
	showArray(table2,TBL2_ROWS);
		
	// Program termiate
	return 0;
}

void showArray(const int numbers[][COLS], int rows)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			cout<<setw(4)<<numbers[i][j]<<"\t";
		}
		cout<<endl;
	}
}

