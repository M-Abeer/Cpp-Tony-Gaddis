// Long Distances call
#include<iostream>
using namespace std;
int main()
{
	float start; // HH/MM Formt
	int minutes;
	double charges;
	
	cout<<"Enter the Starting Time"<<endl;
	cin>>start;
	cout<<"Enter Number of Minutes"<<endl;
	cin>>minutes;
	
	if(start-static_cast<int>(start)>.59)
	{
		 cout << "We're sorry, the last two digits "
                 << "must NOT be\n greater than 59. "
                 << "Rerun the program and\n try again.\n";
	}
	
	
	else
	{
		
	
	
	if(start>=00.00&&start<=06.59)
	{
		charges=minutes*0.05;
		cout<<"Charges are "<<charges<<endl;
	}
	
	
	
	else if(start>=07.00&&start<=19.00)
	{
		charges=minutes*0.45;
		cout<<"Charges are "<<charges<<endl;
	}
	
    else if(start>=19.01 && start<=23.59)
	{
		charges=minutes*0.20;
		cout<<"Charges are "<<charges<<endl;
	}

	else
	{
		cout<<"Invalid input"<<endl;
	}
	
	
	
}
	
	// program terminate
	return 0;
	
}
