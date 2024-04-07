// Exam Grader
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	
	
	int t=0,f=0;
	
	
	ifstream ifs;
	ifs.open("Correct.txt");
	int i;
	char correct[20];
	for(i=0;i<20;i++)
	{
		ifs>>correct[i];
	}
	
	ifstream stu;
	stu.open("Student.txt");
	
	char student[20];
	for(i=0;i<20;i++)
	{
		stu>>student[i];
	}
	
	// Display 
	
	for(i=0;i<20;i++)
	{
		cout<<student[i]<<endl;
	}
	for(i=0;i<20;i++)
	{
		cout<<correct[i]<<endl;
	}
	
	cout<<"Correct Option Numbers are"<<endl;
	for(i=0;i<20;i++)
	{
		if(correct[i]==student[i])
		{
			t++;
			cout<<(i+1)<<endl;
		}
	}
	
	
	cout<<"In Correct Option Numbers are"<<endl;
	for(i=0;i<20;i++)
	{
		if(correct[i]!=student[i])
		{
			f++;
			cout<<(i+1)<<endl;
		}
	}
	
	int missed;
	missed=20-t-f;
	cout<<"Total Missed are "<<missed<<endl;
	
	double percentage;
	if(t/20<=70)
	{
		cout<<"Fail"<<endl;
		
	}
	else
	{
		cout<<"Passed"<<endl;
	}
	
	}
}
