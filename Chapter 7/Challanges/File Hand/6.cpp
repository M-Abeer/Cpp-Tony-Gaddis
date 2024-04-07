// Rain or Shine

#include<iostream>
using namespace std;
#include<fstream>

int main()
{
	
	int rain=0;
	int cloud=0;
	int sunny=0;
	
	int i,j;
	ifstream ifs;
	ifs.open("RainorShine.txt");
	char array[3][30];
	for(i=0;i<3;i++)
	{
		for(j=0;j<30;j++)
		{
			ifs>>array[i][j];
		}
	}
	
	//
	for(i=0;i<3;i++)
	{
		for(j=0;j<30;j++)
		{
			cout<<array[i][j]<<endl;
		}
	}
	
	// How many are Rainy
	for(i=0;i<3;i++)
	{
		for(j=0;j<30;j++)
		{
			if(array[i][j]=='R')
			{
				rain++;
			}
		}
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<30;j++)
		{
			if(array[i][j]=='S')
			{
				sunny++;
			}
		}
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<30;j++)
		{
			if(array[i][j]=='C')
			{
				cloud++;
			}
		}
	}
	
	cout<<"Total Rainy Days are "<<rain<<endl;
	cout<<"Total Cloudy Days are "<<cloud<<endl;
	cout<<"Total Sunny Days are "<<sunny<<endl;
	
	
	
	
	int count=0;
	int count1=0;
	int count2=0;
	
	
	for(i=0;i<1;i++)
	{
		for(j=0;j<30;j++)
		{
			if(array[i][j]=='R')
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	
	
	for(i=1;i<2;i++)
	{
		for(j=0;j<30;j++)
		{
			if(array[i][j]=='R')
			{
				count1++;
			}
		}
		cout<<count1<<endl;
	}
	
	
	
	for(i=2;i<3;i++)
	{
		for(j=0;j<30;j++)
		{
			if(array[i][j]=='R')
			{
				count2++;
			}
		}
		cout<<count2<<endl;
	}
	
	if(count>count1)
	{
		if(count>count2)
		{
			cout<<"Month 1 Has Highest Number of Rains"<<endl;
		}
	}
	
	if(count1>count)
	{
		if(count1>count2)
		{
			cout<<"Month 2 Has Highest Number of Rains"<<endl;
		}
	}
	
	if(count2>count1)
	{
		if(count2>count)
		{
			cout<<"Month 3 Has Highest Number of Rains"<<endl;
		}
	}
	
	else
	{
		cout<<"Equal"<<endl;
	}

	ifs.close();
	
	
	
	// Program Termiinate
	return 0;
	
}
