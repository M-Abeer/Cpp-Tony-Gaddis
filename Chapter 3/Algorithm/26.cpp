// 26
#include<iostream>
using namespace std;
int main()
{
	double Amountof_Sales;
	float Sales_Tax;
	float Sales_Tax_Rate;
	double Total;
	
	// Read Data
	cout<<"Enter Total Amount of SAles"<<endl;
	cin>>Amountof_Sales;
	cout<<"Enter Sales Tax"<<endl;
	cin>>Sales_Tax;
	
	// Calculations
	Sales_Tax_Rate=Sales_Tax*Amountof_Sales;
	Total=Sales_Tax_Rate+Amountof_Sales;
	
	//Display
	cout<<"Sales Tax is "<<Sales_Tax_Rate<<endl;
	cout<<"Total of the Sales "<<Total<<endl;
	
	//Program Terminate
	return 0;
}
