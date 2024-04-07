// Winning Dvision

#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

double getSales(string arg)
{
	double Sales;
	cout<<"Division Quartly Sales Figure"<<endl;
	cin>>Sales;
	while(Sales<0)
	{
		cout<<"Enter Sales Again and Remember ot will be Positive"<<endl;
		cin>>Sales;
	}
	return Sales;	
}

void findHighest(double arg1,double arg2, double arg3, double arg4)
{
	double high;
	high=arg1;
	if(arg2>arg1&&arg2>arg3&&arg2>arg4)
	{
		cout<<"Sales is "<<arg2<<endl;
		cout<<"SouthEast"<<endl;
	}
	
	else if(arg3>arg1&&arg3>arg2&&arg3>arg4)
	{
		cout<<"Sales is "<<arg3<<endl;
		cout<<"NorthWest"<<endl;
	}
	
	if(arg4>arg1&&arg4>arg3&&arg4>arg2)
	{
		cout<<"Sales is "<<arg4<<endl;
		cout<<"SouthWest"<<endl;
	}
	else
	{
		cout<<"Sales is "<<arg1<<endl;
		cout<<"NorthEast"<<endl;
	}
		
}

int main()
{
	
	const string NE="NorthEast",
				 SE="SouthEast",
				 NW="NorthWest",
				 SW="SouthWest";
				 
	double NE_Sales,
		   SE_Sales,
		   NW_Sales,
		   SW_Sales;
		   
	NE_Sales=getSales(NE);
	SE_Sales=getSales(SE);
	NW_Sales=getSales(NW);
	SW_Sales=getSales(SW);
	
	findHighest(NE_Sales,SE_Sales,NW_Sales,SW_Sales);
	// Program Terminate
	return 0;
}
