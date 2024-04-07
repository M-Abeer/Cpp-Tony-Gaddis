// Example 4
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
int main()
{
	
	const int ROWS=3;
	const int COLUMNS=3;
	
	int nums[ROWS][COLUMNS]={2897,5,837,
							 34,7,1623,
							 390,3456,12};	
	
	fstream outFile("table.txt",ios::out);
	
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLUMNS;j++)
		{
			outFile<<setw(8)<<nums[i][j];
		}
		outFile<<endl;
	}
	
	//File CLose
	outFile.close();
	cout<<"Done"<<endl;
	// Program Terminate
	return 0;
	
}
