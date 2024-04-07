// EXapmle 7.28
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
// Function ProtoType
void showValues(vector<int> );


int main()
{
	vector <int> values;
	
	// Put a series a numbers in the vector
	for(int i=0;i<7;i++)
	{
		values.push_back(i*2);
	}
	cout<<values.size()<<endl;
	cout<<"............."<<endl;
	// Display the Number
	showValues(values);
	//Program Terminate
	return 0;
}

void showValues(vector<int>arg)
{
	for(int i=0;i<arg.size();i++)
	{
		cout<<arg[i]<<endl;
	}
}
