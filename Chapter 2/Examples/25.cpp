// Conver seconds to minutes and Seconds
#include<iostream>
using namespace std;
int main()
{
	const short Totalsec=125;
    short min,sec;
	
	min=Totalsec/60;
	sec=Totalsec%60;
	
	//Display Report
	cout<<"It has " <<min<<" minutes and "<<sec<<" seconds.";
	
	//Program Terminate
	return 0;
	
}
