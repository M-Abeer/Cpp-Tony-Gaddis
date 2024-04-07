// Example 4.7
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	const int HIGH_SCORE=95;
	int score1,score2,score3;
	double average;
	//
	cout<<"Enter Test Scores"<<endl;
	cin>>score1>>score2>>score3;
	
	average=(score1+score2+score3)/3;
	
	cout<<fixed<<showpoint<<setprecision(1)<<endl;
	
	// Display Report
	cout<<"Average is "<<average<<endl;
	
	if(average>HIGH_SCORE)
	{
		cout<<"Congratulations"<<endl;
		cout<<"That's a High Score"<<endl;
	}
	
	//
	return 0;
}
