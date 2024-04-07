// Stock Profit
#include<iostream>
using namespace std;
double getinfo(string, double &);
double profit(double ,double ,double ,double ,double );
void display(double);

int main()
{
	double NS, // No of Share
		   SP,  // Sale Price Pe Share
		   SC, // Sales Comission Paid
		   PP,  //Purchase Price Per Share
		   PC;  // Purchase Comission Paid
	
	double profitorloss,x;
	
	getinfo("Number of Share",NS);
	getinfo("Sales Price Per Share",SP);
	getinfo("Sales Comisiion Paid",SC);
	getinfo("Purchase Prcice Per Share",PP);
	getinfo("Purchase Comission paid",PC);
	
	profitorloss=profit(NS,SP,SC,PP,PC);
	calculate(profitorloss);
	
}

double getinfo(string a, double &arg)
{
	cout<<a<<endl;
	cin>>arg;
	return arg;
}
double profit(double NS,double SP,double SC,double PP,double PC)
{
	cout << "NS = " << NS << endl; 
    cout << "PP = " << PP << endl; 
    cout << "PC = " << PC << endl; 
    cout << "SP = " << SP << endl; 
    cout << "SC = " << SC << endl; 
    
	return ((NS*SP)-SC)-((NS*PP)+PC);
}
void display(double arg)
{
	if(arg>0)	
		cout<<"The Profit is "<<arg<<endl;
	else
	 	cout<<"The Loss is "<<arg<<endl;
}
