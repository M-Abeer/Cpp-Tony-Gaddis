// Driver's License Exam

#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>



int main()
{
	char grade[20]={ 'A','D','B','B','C',
					 'B','A','B','C','D',
					 'A','C','D','B','D',
					 'C','C','A','D','B'};
					 
	// Ask the Student for Answaers
	char student[20];
	int i;
	cout<<"Enter Student Answers"<<endl;
	for(i=0;i<20;i++)
	{
		cout<<"Mcqs #"<<(i+1)<<endl;
		cin>>student[i];
	}
	int count=0;
	for(i=0;i<20;i++)
	{
		if(grade[i]==student[i])
		{
			count++;
		}
	}	
	cout<<"Number of Correct Answers are "<<count<<endl;
	int incorrect;
	incorrect=20-count;
	cout<<"Number of incorrect Answers are "<<incorrect<<endl;
	cout<<"Here is the List of wrong answer questions"<<endl;
	for(i=0;i<20;i++)
	{
		if(grade[i]!=student[i])
		{
			cout<<i+1<<endl;
		}
	}
		
	// n
	return 0;
	
}
