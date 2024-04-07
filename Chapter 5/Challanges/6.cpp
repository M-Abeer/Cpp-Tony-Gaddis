// Distance Travelled
#include<iostream>
using namespace std;
int main()
{
	int i,Time;
	double Speed,Distance;
	cout<<"Enter Speed of Vehicle"<<endl;
	cin>>Speed;
	cout<<"Enter Time taken by vehicle "<<endl;
	cin>>Time;
	while(Speed<0||Time<1)
	{
		cout<<"You entered wrong Value"<<endl;
		cout<<"Kindly enter Correct Input"<<endl;
		cin>>Speed;
		cin>>Time;
	}
	
	cout<<"\n******************\n";
	cout<<"Hour Distance Travelled"<<endl;
	for(i=1;i<=Time;i++)
	{
		Distance=Speed*i;
		cout<<i<<"\t\t"<<Distance<<endl;
	}
	//Program terminate
	return 0;
	
}
