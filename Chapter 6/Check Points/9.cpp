// CP 6.9
#include<iostream>
using namespace std;
void a(float, int);


int main()
{
	int x=0;
	float y=1.5;
	
	cout<<x<<"\t"<<y<<endl;
	a(y,x);
	cout<<x<<"\t"<<y<<endl;
	
	//
	return 0;
}
void a(float a,int b)
{
	cout<<a<<"\t"<<b<<endl;
	a=0.0;
	b=10;
	cout<<a<<"\t"<<b<<endl;
}
