//// 4.14
#include<iostream>
using namespace std;
int main()
{
	// Constants 
	const int A=90,
			  B=80,
			  C=70,
			  D=60;
			  
	int Test_Score;
	// Read Data from User]
	cout<<"Enter Test Score"<<endl;
	cin>>Test_Score;
	
	if(Test_Score>=A)
	{
		cout<<"Grade is A"<<endl;
	}
	else if(Test_Score>=80)
	{
		cout<<"Grade is B"<<endl;
	}
	else if(Test_Score>=70)
	{
		cout<<"Grade is C"<<endl;
	}
	else if(Test_Score>=60)
	{
		cout<<"Grade is D"<<endl;
	}
	else if(Test_Score<60&&Test_Score>=0)
	{
		cout<<"Fail"<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	
	// Program Terminate
	return 0;
}
