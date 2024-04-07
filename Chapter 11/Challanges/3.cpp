// Corporate Sales Data

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct SalesData
{
	double first_quarter_sale;
	double second_quarter_sale;
	double third_quarter_sale;
	double forth_quarter_sale;
	double AnnualSales;
	double Average_Sales;
};


int main()
{
	SalesData e,w,n,s;
	
	
	// We can Also Use Loop 
	// East
	cout<<"Enter Sales for East Branch"<<endl;
	cout<<"Enter First Quarter Sales "<<endl;
	cin>>e.first_quarter_sale;
	cout<<"Enter Second Quarter Sales "<<endl;
	cin>>e.second_quarter_sale;
	cout<<"Enter Third Quarter Sales "<<endl;
	cin>>e.third_quarter_sale;
	cout<<"Enter Forth Quarter Sales "<<endl;
	cin>>e.forth_quarter_sale;
	// Calculations
	e.AnnualSales=e.first_quarter_sale+e.second_quarter_sale+e.third_quarter_sale+e.forth_quarter_sale;
	e.Average_Sales=e.AnnualSales/4;
	
	
		
	
	// West
	cout<<"Enter Sales for West Branch"<<endl;
	cout<<"Enter First Quarter Sales "<<endl;
	cin>>w.first_quarter_sale;
	cout<<"Enter Second Quarter Sales "<<endl;
	cin>>w.second_quarter_sale;
	cout<<"Enter Third Quarter Sales "<<endl;
	cin>>w.third_quarter_sale;
	cout<<"Enter Forth Quarter Sales "<<endl;
	cin>>w.forth_quarter_sale;
	
	//Calculations
	w.AnnualSales=w.first_quarter_sale+w.second_quarter_sale+w.third_quarter_sale+w.forth_quarter_sale;
	w.Average_Sales=w.AnnualSales/4;
	
	
	
	// North
	cout<<"Enter Sales for North Branch "<<endl;
	cout<<"Enter First Quarter Sales "<<endl;
	cin>>n.first_quarter_sale;
	cout<<"Enter Second Quarter Sales "<<endl;
	cin>>n.second_quarter_sale;
	cout<<"Enter Third Quarter Sales "<<endl;
	cin>>n.third_quarter_sale;
	cout<<"Enter Forth Quarter Sales "<<endl;
	cin>>n.forth_quarter_sale;
	
	// Calculations
	n.AnnualSales=n.first_quarter_sale+n.second_quarter_sale+n.third_quarter_sale+n.forth_quarter_sale;
	n.Average_Sales=n.AnnualSales/4;
	
	
	
	
	// South
	cout<<"Enter Sales for South Branch"<<endl;
	cout<<"Enter First Quarter Sales "<<endl;
	cin>>s.first_quarter_sale;
	cout<<"Enter Second Quarter Sales "<<endl;
	cin>>s.second_quarter_sale;
	cout<<"Enter Third Quarter Sales "<<endl;
	cin>>s.third_quarter_sale;
	cout<<"Enter Forth Quarter Sales "<<endl;
	cin>>s.forth_quarter_sale;
	//Calculations
	s.AnnualSales=s.first_quarter_sale+s.second_quarter_sale+s.third_quarter_sale+s.forth_quarter_sale;
	s.Average_Sales=s.AnnualSales/4;
	
	
	
	
	// Display the Report
	cout<<"\t\tNextBridge Software Company\n\n"<<endl;	
	//East
	
	cout<<"East Branch \n"<<endl;
	cout<<"Total Annual Sales "<<e.AnnualSales<<endl;
	cout<<"Average Sales "<<e.Average_Sales<<endl;
	
	//West
	cout<<"West Branch \n\n";
	cout<<"Total Annual Sales "<<w.AnnualSales<<endl;
	cout<<"Total Average Sales "<<w.Average_Sales<<endl;
	
	//North	
	cout<<"North Branch \n\n";
	cout<<"Total Annual Sales "<<n.AnnualSales<<endl;
	cout<<"Total Average Sales "<<n.Average_Sales<<endl;
	
	//South
	cout<<"South Branch \n\n";
	cout<<"Total Annual Sales "<<s.AnnualSales<<endl;
	cout<<"Total Average Sales "<<s.Average_Sales<<endl;
	
	// Program terminate
	return 0;
	
	
}
