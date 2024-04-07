// Example 7.31

#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

double avgVector(vector<int>);

int main()
{
	vector<int>values;
	int numValues;
	double average;
	
	// Enter number Values
	cout<<"How many Values do you wish to Enter"<<endl;
	cin>>numValues;
	
	for(int i=0;i<numValues;i++)
	{
		int tempValue;
		cout<<"Enter a value"<<endl;
		cin>>tempValue;
		values.push_back(tempValue);
	}
	
	// et the avergae of the Values
	average=avgVector(values);
	cout<<"Average :"<<average<<endl;
	
	// Program terminate
	return 0;
}

double avgVector(vector<int>arg)
{
	int total=0;
	double average;
	if(arg.empty())
	{
		cout<<"No value to Average"<<endl;
		average=0.0;
	}
	else
	{
		for(int i=0;i<arg.size();i++)
		{
			total+=arg[i];
			average=total/arg.size();
		}
	}
	return average;
}
