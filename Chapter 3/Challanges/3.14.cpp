// Monthly Sales Tax Method 1
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>

int main()
{
	
	string month;
	double sales;
	double Total_Amount;
	
	const double State_Tax=0.04;
	const double Country_Tax=0.02;
	
	double State_Sales_Tax;
	double Country_Sales_Tax;
	double Total_Sales_Tax;
	
	
	//Read Data from User
	cout<<"Enter Name of Month"<<endl;
	getline(cin,month);
	cout<<"Enter Total Sales"<<endl;
	cin>>sales;
	//Calculate State Sales Tax
	State_Sales_Tax=sales*State_Tax;
	//Calculate Country Sales Tax
	Country_Sales_Tax=sales*Country_Tax;
	//CAAlculate total aount by adding sales, and taxes
	Total_Amount=sales+State_Sales_Tax+Country_Sales_Tax;
	//Now calculate Total Sales Tax
	Total_Sales_Tax=State_Sales_Tax+Country_Sales_Tax;
	//Calculations Complete
	
	//Display Rreport;
	cout<<"\n******************************\n";
	cout<<"  MONTHLY SALES TAX"<<endl;
	cout<<"Month:"<<month<<endl;
	cout<<"--------------------------------\n";
	cout<<setprecision(2)<<fixed<<right<<endl;
	cout<<setw(8)<<"Total Collected:     $"<<Total_Amount<<endl;
	cout<<setw(8)<<"Sales:               $"<<sales<<endl;
	cout<<setw(8)<<"Country Sales Tax:   $"<<Country_Sales_Tax<<endl;
	cout<<setw(8)<<"State Sales Tax:     $"<<State_Sales_Tax<<endl;
	cout<<setw(8)<<"Total Sales Tax:     $"<<Total_Sales_Tax<<endl;
	//Program Terminate
	return 0;
}
//Method 2
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float STATE_SALES_TAX  = 0.04,
                COUNTY_SALES_TAX = 0.02,
                SALES_TAX        = 0.06;

    float S,    // product sales
          T,    // total income (product sales + sales tax)
          total_state_tax,
          total_county_tax,
          total_sales_tax;

    string month;

    int year;

    // Ask user for month, year, and total collected (sales plus sales tax)
    cout << endl;
    cout << "Enter the month to receive the report for: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Total amount collected for the month of " << month << ": ";
    cin >> T;

    // Calculate Sales, County Sales Tax, State Sales Tax, and Total Sales Tax
    S = T / 1.06;
    total_state_tax = S * STATE_SALES_TAX;
    total_county_tax = S * COUNTY_SALES_TAX;
    total_sales_tax  = S * SALES_TAX;

    // Display Calculations
    cout << setprecision(2) << fixed << right << endl;
    cout << "---------------------------------" << endl;
    cout << "Month: " << month << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Collected:    $" << setw(10) << T << endl;
    cout << "Sales:              $" << setw(10) << S << endl;
    cout << "County Sales Tax:   $" << setw(10) << total_county_tax << endl;
    cout << "State Sales Tax:    $" << setw(10) << total_state_tax << endl;
    cout << "Total Tales Tax:    $" << setw(10) << total_sales_tax << endl;
    cout << "---------------------------------" << endl;
    cout << endl;

    // Terminate Program
    return 0;
}*/
