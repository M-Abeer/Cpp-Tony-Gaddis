//CP 3.19
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	const double PI=3.14159;
	double radian,degree;
	cout<<"Enter an angle in radin degree and i will convert it in radian"<<endl;
	cin>>degree;
	radian=degree*PI/180;           //  * / %    
	cout<<left<<fixed<<setprecision(4)<<setw(5)<<showpoint<<radian<<endl;
	return 0;
}
