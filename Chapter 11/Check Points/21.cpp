// 11.21
#include<iostream>
using namespace std;
enum Color{Red,Green,Blue};

int main()
{
	Color c;
	c=Red;
//	cout<<c;
//	c++;  // Not Allowed
	c=static_cast<Color>(c+1);
	cout<<c<<endl;
}
