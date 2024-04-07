// 4.21 cp
#include<iostream>
using namespace std;
int main()
{
	int Speed;
	
	//
	cout<<"Enter Speed"<<endl;
	cin>>Speed;
	
	if(!(Speed>=0&&Speed<=200))
	{
		cout<<"The Number is not Valid"<<endl;
	}
	// program Terminate
	return 0;
}
