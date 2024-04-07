//showpoint
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	double a,b,c,total;
	cout<<"Enter a"<<endl;
	cin>>a;
	cout<<"Enter b"<<endl;
	cin>>b;
	cout<<"Enter c"<<endl;
	cin>>c;
	total=a+b+c;
	cout<<"\nSUM\n";
	cout<<"\n---------\n";
	cout<<setprecision(8)<<showpoint<<endl;
	cout<<total<<endl;
	return 0;
}
