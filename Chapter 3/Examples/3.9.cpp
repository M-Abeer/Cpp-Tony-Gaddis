//Example 3.9
#include<iostream>
using namespace std;
int main()
{
	int books,months;
	double permonth;
	cout<<"Enter Book"<<endl;
	cin>>books;
	cout<<"Enter Months"<<endl;
	cin>>months;
	
	permonth=static_cast<double>(books)/months;// Books already become double.........
	cout<<"That is "<<permonth<<" books per Month"<<endl;
	//Program Terminate
	return 0;
}
