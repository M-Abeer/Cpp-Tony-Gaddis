// Weather Statistics
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Weather
{
	double Total_Rainfall;
	double High_Temperature;
	double Low_Temperature;
	double Average_Temperature;
};
int main()
{
	Weather w[12];
	int i;
	// Enter Data for Each Month
	for(i=0;i<12;i++)
	{
		cout<<"Enter Data of "<<(i+1)<<" First Month "<<endl;
		cout<<"Enter Total rainFall "<<endl;
		cin>>w[i].Total_Rainfall;
		cout<<"Enter High temperature "<<endl;
		cin>>w[i].High_Temperature;
		cout<<"Enter Low Temperature "<<endl;
		cin>>w[i].Low_Temperature;
		/*cout<<"Enter Average Temperature "<<endl;
		cin>>w[i].Average_Temperature;*/
		// Calculate Average Temperature
		w[i].Average_Temperature=(w[i].High_Temperature+w[i].Low_Temperature)/2;
	}
	
	double Total=0,Average;
	for(i=0;i<12;i++)
	{
		Total+=w[i].Total_Rainfall;
	}
	Average=Total/12;
	
	double high,low;
//	int loc,loc1;
	high=w[0].High_Temperature;
	low=w[0].Low_Temperature;
	
	for(i=0;i<12;i++)
	{
		if(w[i].High_Temperature>high)
		{
			high=w[i].High_Temperature;
//			loc=i+1;
			
		}
		if(w[i].Low_Temperature<low)
		{
			low=w[i].Low_Temperature;
//			loc1=i+1;
			
		}
	}
	double Average_Temp;
	for(i=0;i<12;i++)
	{
		Average_Temp+=w[i].Average_Temperature;
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
