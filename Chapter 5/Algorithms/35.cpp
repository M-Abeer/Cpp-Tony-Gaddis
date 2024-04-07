// 35
#include<iostream>
using namespace std;
int main()
{
	double product=0,number;
	
	
	while(product<100)
	{
		cout<<"Enter a Number"<<endl;
		cin>>number;
		product+=number*10;
	//
		cout<<product<<endl;
	//	product++;
	}
	cout<<"Product is "<<product<<endl;
}
