// 4.19
#include<iostream>
using namespace std;
int main()
{
	const int MIN=0;
	const int MAX=100;
	
	const int A=90;
	const int B=80;
	const int C=70;
	const int D=60;
	
	
	int Score;
	
	// Read Data from user
	cout<<"Enter Test Score"<<endl;
	cin>>Score;
	
	if(Score>=MIN&&Score<=MAX)
	{
		if(Score>=A)
		{
			cout<<"Grade is A"<<endl;
		}
		else if(Score>=B)
		{
			cout<<"Grade is B"<<endl;
		}
		else if(Score>=C)
		{
			cout<<"Grade is C"<<endl;
		}
		else if(Score>=D)
		{
			cout<<"Grade is D"<<endl;
		}
		else 
		{
			cout<<"Fail!!"<<endl;
		}
	}
	else
	{

		cout<<"Please Enter a correct Value Which is In Between Max and Miimum Value"<<endl;
	}
		
	
		// Program Terminate
		return 0;
}
