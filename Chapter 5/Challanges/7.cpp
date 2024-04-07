
// Pennies for Pay
#include<iostream>
using namespace std;
int main()
{
	int days;
	int i;
	double Salary,Total=0;
	//Read Data from user
	cout<<"Enter Number of days"<<endl;
	cin>>days;
	while(days<0)
	{
		cout<<"You entered wrong Input"<<endl;
		cout<<"Kindly Enter Correct Input"<<endl;
		cin>>days;
	}
	
	//cout << daily_salary << endl;
      //  daily_salary *= INCREMENTAL_AMOUNT;
	
	for(i=0;i<days;i++)
	{
		
		Salary=(i*i);
		cout<<"Salary Per Day "<<(i+1)<<" is "<<Salary<<endl;
		Total+=Salary;
		
	}
	cout<<"Total Salary is "<<Total<<endl;
	return 0;
}
