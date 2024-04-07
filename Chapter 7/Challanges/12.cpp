// Grade Book
#include<iostream>
using namespace std;
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<ctime>
#include<string>


int main()
{
	//
	const int STUDENT=5;
	const int TESTSCORE=4;
	const int size=5;
	
	int array[STUDENT][TESTSCORE];
	string name[5];
	char grade[size]={'A','B','C','D','F'};
	
	int i,j;
	
	// Enter Student Name
	cout<<"Enter Student Name"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<"Enter Student Name #"<<(i+1)<<endl;
		cin>>name[i];
	}
	
	
	
	
	double average;
	// Enter Test Score
	cout<<endl;
	cout<<"Enter Test Score"<<endl;
	for(i=0;i<size;i++)
	{
			int total=0;
			cout<<"Student #"<<(i+1)<<" marks "<<endl;
		for(j=0;j<size;j++)
		{
			cout<<"Subject #"<<(j+1)<<endl;
			cin>>array[i][j];
			total+=array[i][j];
						
		}
		
			average=(total*1.0f/500)*100;
			cout<<average<<endl;
			
			if(average>=90&&average<=100)
				cout<<name[i]<<" has grade "<<grade[0]<<endl;	
			
			else if(average>=80&&average<=89)
				cout<<name[i]<<" has grade "<<grade[1]<<endl;	
			
			else if(average>=70&&average<=79)
				cout<<name[i]<<" has grade "<<grade[2]<<endl;	
			
			else if(average>=60&&average<=69)
				cout<<name[i]<<" has grade "<<grade[3]<<endl;	
			
			else if(average>=0&&average<=59)
				cout<<name[i]<<" has grade "<<grade[4]<<endl;		
				
			else
			{
				cout<<"Invalid Input"<<endl;
			}	
			
	}
	// Program Terminate
	return 0;
				
}
