// Weater Statistics Modification


#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

enum Day{Jan,Feb,Mar,April,May,June,July,Aug,Sept,Oct,Nov,Dec};

struct Weather
{
	double Total_Rainfall;
	double High_Temperature;
	double Low_Temperature;
	double Average_Temperature;
};
int main()
{
	double Total_Rainfall;
	double High_Temperature;
	double Low_Temperature;
	double Average_Temperature;
	
	
	
	Day workday;
//	Weather w[12];
//	int i;
	// Enter Data for Each Month
	for(workday=Jan;workday<=Dec;workday=static_cast<Day>(workday+1))
	{
		cout<<"Enter Data of "<<workday<<endl;
		cout<<"Enter Total rainFall "<<endl;
		cin>>Total_Rainfall[workday];
		cout<<"Enter High temperature "<<endl;
		cin>>High_Temperature[workday];
		cout<<"Enter Low Temperature "<<endl;
		cin>>Low_Temperature[workday];
		
		Average_Temperature[workday]=(High_Temperature[workday]+Low_Temperature[workday])/2;
	}
	
	double Total=0,Average;
	for(workday=Jan;workday<=Dec;workday=static_cast<Day>(workday+1))
	{
		Total+=Total_Rainfall[workday];
	}
	Average=Total/12;
	
	double high,low;
	
	high=High_Temperature[workday];
	low=Low_Temperature[workday];
	
	for(workday=Jan;workday<=Dec;workday=static_cast<Day>(workday+1))
	{
		if(High_Temperature[workday]>high)
		{
			high=High_Temperature[workday];	
		}
		
		if(Low_Temperature[workday]<low)
		{
			low=Low_Temperature[workday];
		}
	}
	double Average_Temp;
	for(workday=Jan;workday<=Dec;workday=static_cast<Day>(workday+1))
	{
		Average_Temp+=Average_Temperature[workday];
	}
	
	
	// Display the Report
	cout<<"Average Monthly RainFall "<<Average<<endl;
	cout<<"Total Total RainFall for Year "<<Total<<endl;
	cout<<"Highest Temperature of Year "<<high<<endl;
	cout<<"Lowest Temperature of Year "<<low<< endl;
	cout<<"Average of All Months Average Temperature "<<Average_Temp<<endl;
	
	// Program Terminate
	return 0;
}
