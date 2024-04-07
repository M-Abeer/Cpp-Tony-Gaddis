// Safest Driving Area

#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

int get_NumAccidents(string arg)
{
	int Accidents;
	cout<<"Enter Number of Acidents"<<endl;
	cin>>Accidents;
	while(Accidents<0)
	{
		cout<<"Enter Again and Remember it must be Positive"<<endl;
		cin>>Accidents; 
	}
	return Accidents;
}

void findLowest(int arg1,int arg2, int arg3, int arg4,int arg5)
{
	int low;
	low=arg1;
		if(arg2<arg1&&arg2<arg3&&arg2<arg4&&arg2<arg5)
	{
		cout<<"Sales is "<<arg2<<endl;
		cout<<"SouthEast"<<endl;
	}
	
	else if(arg3<arg1&&arg3<arg2&&arg3<arg4&&arg3<arg5)
	{
		cout<<"Sales is "<<arg3<<endl;
		cout<<"NorthWest"<<endl;
	}
	
	else if(arg4<arg1&&arg4<arg3&&arg4<arg2&&arg4<arg5)
	{
		cout<<"Sales is "<<arg4<<endl;
		cout<<"SouthWest"<<endl;
	}
	else if(arg5<arg1&&arg5<arg3&&arg5<arg2&&arg5<arg4)
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
	const string N="North",
				 S="South",
				 E="East",
				 W="West",
				 C="Central";
				 
				 
	int N_A,S_A,E_A,W_A,C_A;
	N_A=get_NumAccidents(N);
	S_A=get_NumAccidents(S);
	E_A=get_NumAccidents(E);
	W_A=get_NumAccidents(W);
	C_A=get_NumAccidents(C);
	
	
	findLowest(N_A,S_A,E_A,W_A,C_A);
	//Program Terminate
	return 0;	
	
}
