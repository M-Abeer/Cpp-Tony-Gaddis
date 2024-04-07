// Multiple Stock Sales
#include<iostream>
using namespace std;

double getinfo(string,double &);
double calculate(double ,double ,double ,double ,double );
void Display(double);
int main()
{
	double NS,
		   SP,
		   SC,
		   PP,
		   PC;
	double No_Stocks;	   
	double profitorloss;
	
	for(int i=0;i<No_Stocks;i++)
	{
		
	
	getinfo("Number of Stocks",No_Stocks);
	
	getinfo("Number of Share",NS);
	getinfo("Sales Price Per Share",SP);
	getinfo("Sales Comisiion Paid",SC);
	getinfo("Purchase Prcice Per Share",PP);
	getinfo("Purchase Comission paid",PC);
	
	profitorloss=calculate(NS,SP,SC,PP,PC);
	Display(profitorloss);
	
}

// Program Terminate
return 0;
}

double getinfo(string a,double &info)
{
	cout<<a<<endl;
	cin>>info;
	return info;
}

double calculate(double NS,double SP,double SC,double PP,double PC)
{
	cout << "NS = " << NS << endl; 
    cout << "PP = " << PP << endl; 
    cout << "PC = " << PC << endl; 
    cout << "SP = " << SP << endl; 
    cout << "SC = " << SC << endl; 
    
	return ((NS*SP)-SC)-((NS*PP)+PC);
}

void Display(double arg)
{
	if(arg>0)	
		cout<<"The Profit is "<<arg<<endl;
	else
		cout<<"The Loss is "<<arg<<endl;
}

