// Algo 38
#include<iostream>
using namespace std;
int main()
{
	int hours;
	cout<<"Enter Hours"<<endl;
	cin>>hours;
	
	if(!(hours>0&&hours<80))
	{
		cout<<"The Number is not Valid"<<endl;
	}
	//
	return 0;
	
}
