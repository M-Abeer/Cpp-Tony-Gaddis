// Example 3.26
#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>

int main()
{
	// Constants
	const int MIN_VALUE=1;
	const int MAX_VALUE=6;
	
	// Variables
	int die1,die2;
	
	// Get Time of System
	unsigned seed=time(0);
	
	// Seed the Random Number Generator
	srand(seed);
	
	die1=(rand()%(MAX_VALUE-MIN_VALUE+1)+MIN_VALUE);
	die2=(rand()%(MAX_VALUE-MIN_VALUE+1)+MIN_VALUE);
	
	// Display Report
	cout<<"*********************"<<endl;
	cout<<"Rolling the Dices...."<<endl;
	cout<<die1<<endl;
	cout<<die2<<endl;
	cout<<"*********************"<<endl;
	
	//Program Terminate
	return 0;
	
}
