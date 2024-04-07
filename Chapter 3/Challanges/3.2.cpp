//Stadium Seating
#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	int Cost_A=15;
	int Cost_B=12;
	int Cost_C=9;

	int Tickets_Sold_A;
	int Tickets_Sold_B;
	int Tickets_Sold_C;

	double Income_A;
	double Income_B;
	double Income_C;
	
	double Total_Income;

	//Class A
	cout<<endl;
	cout<<"Enter number of tickets sold for class A"<<endl;
	cin>>Tickets_Sold_A;
	Income_A=Tickets_Sold_A*Cost_A;
	cout<<"Income Generated from Class A is "<<Income_A<<endl;
	
	
	//Class B
	cout<<endl;
	cout<<"Enter number of tickets sold for class B"<<endl;
	cin>>Tickets_Sold_B;
	Income_B=Tickets_Sold_B*Cost_B;
	cout<<"Income Generated from Class B is "<<Income_B<<endl;
	
	
	//Class C
	cout<<endl;
	cout<<"Enter number of tickets sold for class C"<<endl;
	cin>>Tickets_Sold_C;
	Income_C=Tickets_Sold_A*Cost_C;
	cout<<"Income Generated from Class C is "<<Income_C<<endl;

	cout<<endl;
	Total_Income=Income_A+Income_B+Income_C;
	cout<<"\n------------\n";
	cout<<"Stadium Seating"<<endl;
	cout<<"The Amount of income generated from Tickets is ";
	cout<<setprecision(2)<<fixed<<Total_Income<<endl;
	
	return 0;
}
