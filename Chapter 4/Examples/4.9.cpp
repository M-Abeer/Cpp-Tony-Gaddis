// 4.9
#include<iostream>
using namespace std;
int main()

{
	float num1,num2,Quotient;
	
	cout<<"Enter Number 1 "<<endl;
	cin>>num1;
	cout<<"Enter Number 2 "<<endl;
	cin>>num2;
	
	if(num2==0)
	{
		cout<<"Division Does Not take Place "<<endl;
		cout<<"Error Occur"<<endl;
	}
	else
	{
		Quotient=num1*1.0f/num2;
		cout<<"Quotient is "<<Quotient<<endl;
	}
	
	// Program Terminate
	return 0;
}
