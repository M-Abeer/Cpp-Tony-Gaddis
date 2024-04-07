// Average RainFall
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
int main()
{

	string a,b,c;

	double Amount_Rain1;
	double Amount_Rain2;
	double Amount_Rain3;
	
	double Average_Rainfall;
	
	cout<<endl;
	cout<<"Enter name of First month"<<endl;
	cin>>a;
	cout<<"Enter name of Second month"<<endl;
	cin>>b;
	cout<<"Enter name of Third month"<<endl;
	cin>>c;
	
	cout<<"Enter Amount of Rain in First month in inches "<<endl;
	cin>>Amount_Rain1;
	cout<<"Enter Amount of Rain in Second month in inches "<<endl;
	cin>>Amount_Rain2;
	cout<<"Enter Amount of Rain in Third month in inches "<<endl;
	cin>>Amount_Rain3;
	cout<<"Data Successfully Entered"<<endl;
	
	Average_Rainfall=(Amount_Rain1+Amount_Rain2+Amount_Rain3)/3;
	
	cout<<"\n------------\n";
	cout<<"Average RainFall"<<endl;
	cout<<"The average RainFall for "<<a<<" "<<b<<" "<<c<<" "<<"is"<<" ";
	cout<<setw(3)<<setprecision(2)<<fixed<<Average_Rainfall<<endl;
	return 0;
	
	
}
