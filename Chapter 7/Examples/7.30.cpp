// Example 7.30
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
	vector <int> number(100);
	// The values vector has 
	cout<<"The values vector has "<<number.size()<<" elements."<<endl;
	//
	cout<<"I will call the clear member function"<<endl;
	number.clear();
	//
	cout<<"Now, the value vector has "<<number.size()<<" elements."<<endl;
	// Program terminate
	return 0;
}
