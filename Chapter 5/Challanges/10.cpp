// Averge RainFall
#include<iostream>
using namespace std;
int main()
{
	int i,j,Years;
	double Inches,
		   Total_inches=0,
		   Average,
		   Months=0;
		   
	cout<<"Enter Number of Years"<<endl;
	
	cin>>Years;	 
	while(Years<0)
	{
		cout<<"You have Enter Wrong Input"<<endl;
		cout<<"Enter Correct Input"<<endl;
		cin>>Years;
	}
	for(i=1;i<=Years;i++)
	{
		for(j=1;j<=12;j++)
		{
			cout<<"Enter Inches of rainFall for each Month"<<endl;
			cin>>Inches;
			while(Inches<0)
			{
				cout<<"Eror"<<endl;
				cin>>Inches;
			}
			Months++;
			//Months+=j;
			Total_inches+=Inches;
		}
		
	}  
	Average=(Total_inches/Months);
	cout<<"Number of Months "<<Months<<endl;
	cout<<"Total inches of RainFall "<<Total_inches<<endl;
	cout<<"Average rainfall per Month "<<Average<<endl;
	//
	return 0;
		   
	
}
