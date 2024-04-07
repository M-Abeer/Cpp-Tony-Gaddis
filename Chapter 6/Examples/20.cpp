// Example 20
#include<iostream>
using namespace std;
const int BIRDS=500;  // Global Constants
void california()
{
	const int BIRDS=1000;
	cout<<"In California, There are "<<BIRDS<<" Birds"<<endl;
}

int main()
{
	cout<<"In main, there are "<<BIRDS<<" Birds"<<endl;
	california();
	// Program terminate
	return 0;
}
