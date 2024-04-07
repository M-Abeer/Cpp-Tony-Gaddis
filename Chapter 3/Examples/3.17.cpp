//fixed 
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	double a,b,c;
	double total;
	cout<<"Enter value of a "<<endl;
	cin>>a;
	cout<<"Enter value of b "<<endl;
	cin>>b;
	cout<<"Enter value of c "<<endl;
	cin>>c;
	cout<<setprecision(2)<<fixed<<endl;
	cout<<setw(8)<<a<<endl;
	cout<<setw(8)<<b<<endl;
	cout<<setw(8)<<c<<endl;
	total=a+b+c;
	cout<<setw(8)<<total<<endl;
	return 0;
}
