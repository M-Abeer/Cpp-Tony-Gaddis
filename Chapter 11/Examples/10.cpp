// EXample 11.10

#include<iostream>
using namespace std;

enum Day{Monday,Tuesday,Wednesday,Thursday};

int main()
{
	Day workday;
	double Sales[4];
	double Total=0;
	
	for(workday=Monday;workday<=Thursday;workday=static_cast<Day>(workday+1))   // DAta Type Must be Change
	{
		cout<<"Enter Sales for Day "<<workday<<endl;
		cin>>Sales[workday];
	}
	
	for(workday=Monday;workday<=Thursday;workday=static_cast<Day>(workday+1))   // DAta 
	{
		Total+=Sales[workday];
	}
	
	// Diplsay the Reort
	cout<<"Total is "<<Total<<endl;
	//
	return 0;
	
}

