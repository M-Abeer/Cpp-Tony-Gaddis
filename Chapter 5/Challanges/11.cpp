// Population
// Limits can easily be done
// using while loop or many other ways
// Due to Shortage of Time Just Code without Limits...Thankyou

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	int Start=0;  // Starting Size of Population
	float average_daily_population; // Average of daily Population 
	int Days; // Number of days to Multiply
	int i;
	
	cout<<"Enter Starting Size of Population"<<endl;
	cin>>Start;
	cout<<"Enter Average daily Population Increase"<<endl;
	cin>>average_daily_population;
	 average_daily_population*=0.01; 
	cout<<"ENter Number of Days they will Multiply"<<endl;
	cin>>Days;
	
	// Use for Loop
	
	for(i=0;i<Days;i++)
	{
		
		cout<<"Population of Day "<<(i+1)<<" is "<<Start<<endl;
		Start+=(Start*average_daily_population);
	}
	
	
	// Program terminate
	return 0;
}
