// Example 7.29
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> values;
	
	values.push_back(1);
	values.push_back(2);
	values.push_back(3);
	cout<<"The Size of value is "<<values.size()<<endl;
	
	// Remove Value from the Vector
	cout<<"Popping the Value from vector...."<<endl;
	values.pop_back();
	cout<<"The Size of value is "<<values.size()<<endl;
	
	// Now remove another value from the Vector
	cout<<"Popping the Value from vector...."<<endl;
	values.pop_back();
	cout<<"The Size of value is "<<values.size()<<endl;
	
	// Remove the Last Value from vector
	cout<<"Popping the Value from vector...."<<endl;
	values.pop_back();
	cout<<"The Size of value is "<<values.size()<<endl;
	
	
	// Program terminate
	return 0;
}
