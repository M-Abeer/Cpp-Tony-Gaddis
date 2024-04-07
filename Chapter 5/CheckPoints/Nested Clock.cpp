// Nested Loop
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	double sec,min,hours;
	for(hours-0;hours<24;hours++)
	{
		for(min=0;min<60;min++)
		{
			for(sec=0;sec<60;sec++)
			{
				
				cout<<setw(2)<<hours<<":";
				cout<<setw(2)<<min<<":";
				cout<<setw(2)<<sec<<":";
			}
		}
	}
	return 0;
}
