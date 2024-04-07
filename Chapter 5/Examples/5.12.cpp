// Example 5.12
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int day,i;
	double Sales;
	double Total=0;
	cout<<"Enter Numbr of days"<<endl;
	cin>>day;
	for(i=1;i<=day;i++)
	{
		cout<<setprecision(2)<<fixed<<right<<endl;
		cout<<"Enter Sales of day"<<i<<endl;
		cin>>Sales;
		Total+=Sales;       //Accumalate Running Total
		//Total is Accumulaor	
	}
	cout<<"Total is $"<<Total<<endl;
	return 0;
}
