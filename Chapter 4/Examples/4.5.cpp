// 4.5
#include<iostream>
using namespace std;
int main()
{
	int score1,score2,score3;
	double average;
	
	// Read data from usr
	cout<<"Entrer Scores of Three Tests"<<endl;
	cin>>score1>>score2>>score3;
	
	average=(score1+score2+score3)/3;
	
	
	if(average==90)
		cout<<"Congratulations"<<endl;
		
	// Program Terminate
	return 0;
}
