// Example 6.7
#include<iostream>
using namespace std;
void function1(int);

int main()
{
	cout<<"I will give several value to Function1"<<endl;
	function1(5);
	function1(10);
	function1(2);
	function1(16);
	
	cout<<"Back to Main"<<endl;
	
}
	void function1(int num)
	{
		cout<<"The number is "<<num<<endl;
	}
