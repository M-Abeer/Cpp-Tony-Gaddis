// Example 3.25'
#include<iostream>
using namespace std;
#include<cmath>	 //
#include<ctime>  //for time function
#include<cstdlib>   //for rand() and srand() 

int main()
{
	
	// Get the System Time
	unsigned seed= time(0);
	
	// Seed Random Number Generator
	srand(seed);
	
	// Display three Random Number
	cout<< rand() <<endl;
	cout<< rand() <<endl;
	cout<< rand() <<endl;
	
	// Program Terminate
	return 0;
	
}


