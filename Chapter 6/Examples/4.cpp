// Example 4
#include<iostream>
using namespace std;

void Deeper()
{
	cout<<"I am in Deeper Function"<<endl;
}

void Deep()       
{
	cout<<"I am in Deep Function"<<endl;
	Deeper();           // Function Calling from Function
	cout<<"I am again in Deep Function"<<endl;
}

int main()
{
	cout<<"I am in Main Function"<<endl;
	Deep();
	cout<<"I am Again in Main Function"<<endl;
	//
	return 0;
}
