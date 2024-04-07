// Example 5.11
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int KPH;
	float MPH;
	const int inc=10;
	cout<<"KPH\t\t\tMPH"<<endl;
	cout<<"****************************"<<endl;
	for(KPH=60;KPH<=130;KPH+=inc)
	{
		MPH=KPH*0.6214;
		cout<<setprecision(1)<<fixed<<right<<endl;
		cout<<KPH<<"\t\t\t"<<MPH<<endl;
	}
	return 0;
}
