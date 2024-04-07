// Chips and Salsa
#include<iostream>
using namespace std;
#include<string>

int main()
{
	string name[5]={"mild","medium","sweet","hot","zesty"};
	int array[5]; // Number of Jars Sold of each
	int i;
	int total=0;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter Number of Jars Sold of "<<name[i]<<endl;
		cin>>array[i];
		total+=array[i];
	}
	
	// Display The report
	for(i=0;i<5;i++)
	{
		cout<<"Number of Jars Sold of "<<name[i]<<" are "<<array[i]<<endl;
		
	}
	int low,high;
	low=array[0];
	high=array[0];
	int loc,loc2;
	for(i=0;i<5;i++)
	{
		if(array[i]>high)
		{
			high=array[i];
			loc=i;
		}
					
		if(array[i]<low)
		{
			low=array[i];
			loc2=i;
		}
	}
	
	cout<<"Total Number of Jars Sold are "<<total<<endl;
	cout<<"Name of Highest Selling Pproduct "<<name[loc]<<endl;
	cout<<"Name of Lowest Selling Product "<<name[loc2]<<endl;
	
	
	// program terminatre
	return 0;
	
	
}
