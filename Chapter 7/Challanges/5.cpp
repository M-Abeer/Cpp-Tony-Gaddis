// Monkey Business
#include<iostream>
using namespace std;


int main()
{
	int i,j;
	int array[3][5];
	int total=0;
	
	double average;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<"Enter Monkey "<<(i+1)<<" food";
			cin>>array[i][j];
			total+=array[i][j];
		}
	}
	
	average=total/5;
	cout<<"Average is "<<average<<endl;
	int low,high;
	
	
	low=array[0][0];
	for(i=0;i<1;i++)
	{
		for(j=0;j<5;j++)
		{
			if(array[i][j]<low)
				low=array[i][j];
				
		}
	cout<<"Least Amount of Food eaten during week by "<<(i+1)<<" Monkey is "<<low<<endl;
	}
	
	
	high=array[0][0];
	for(i=0;i<1;i++)
	{
		for(j=0;j<5;j++)
		{
			if(array[i][j]>high)
				high=array[i][j];
				
		}
		
	cout<<"Highest Amount of Food eaten during week by "<<(i+1)<<" Monkey "<<high<<endl;
	}
		
	// Program Terminate
	return 0;
}
