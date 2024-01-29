// Total Purchase
///*
#include<iostream>
using namespace std;
int main()
{
	float a=15.95,
	b=24.95,
	c=6.95,
	d=12.95,
	e=3.95;
	
	cout<<"Display All Item Price"<<endl;
	cout<<"Item 1 "<<a<<endl;
	cout<<"Item 2 "<<b<<endl;
	cout<<"Item 3 "<<c<<endl;
	cout<<"Item 4 "<<d<<endl;
	cout<<"Item 5 "<<e<<endl;
	cout<<"**********"<<endl;
	cout<<"Display SubTotal"<<endl;
	float Sub_Total;
	Sub_Total=a+b+c+d+e;
	cout<<"Sub Total is "<<Sub_Total<<endl;
	cout<<"**********"<<endl;
	float Sales_Tax=0.07;
	float Tax;
	Tax=Sub_Total*Sales_Tax;
	cout<<"The Amount of Sales Tax "<<Tax<<endl;
	cout<<"**********"<<endl;
	cout<<"Total"<<endl;
	float Total;
	Total=Sub_Total+Tax;
	cout<<"Total Price is "<<Total<<endl;
	cout<<"ThankYou"<<endl;	
}

