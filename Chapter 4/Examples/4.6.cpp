// Example 4.6
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	double Average;
	double a,b,c;
	//Raed Data from User
	cout<<"Enter a"<<endl;
	cin>>a;
	cout<<"Enter b"<<endl;
	cin>>b;
	cout<<"Enter c"<<endl;
	cin>>c;
	Average=(a+b+c)/3.0;
	//Use of if statement
	if(Average>=80)
	{
		cout<<"Pass The Exam"<<endl;
		cout<<"Promoted"<<endl;
		cout<<"Congratulations"<<endl;
	}
	return 0;
}
