// Examalple 5.14
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int Tests,Students;
	double Average;
	cout<<"Enter Number of Students"<<endl;
	cin>>Students;
	cout<<"Enter Number of Tests"<<endl;
	cin>>Tests;
	int i,j,score,Total=0;
	for(i=1;i<=Students;i++)
	{
		for(j=1;j<=Tests;j++)
		{
			cout<<"Enter Score 1 of Student "<<i<<endl;
			cin>>score;
			Total+=score;
		}
		Average=Total/Tests;
		cout<<"Average of First Student is "<<Average<<endl;
	}
	return 0;
	
}
