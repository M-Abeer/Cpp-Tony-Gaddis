// 4.30
#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter First Number"<<endl;
	cin>>num;
	
	if(num>0)
	{
		cout<<"Enter Another Number"<<endl;
		int num;
		cin>>num;
		cout<<"You Entered "<<num<<endl;
	}
	cout<<"First Number you Entered is "<<num<<endl;
	
	//
	return 0;
}
