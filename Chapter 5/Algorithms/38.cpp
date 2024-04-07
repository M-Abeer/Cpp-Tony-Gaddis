// 38
#include<iostream>
using namespace std;
int main()
{
	int i;
	int number;
	double total;
	
	for(i=0;i<10;i++)
	{
		cout<<"Enter a Number"<<endl;
		cin>>number;
		total+=number;
	}
	cout<<"Total is "<<total<<endl;
	//
	return 0;
}
