// Example 6.21
#include<iostream>
using namespace std;
void showlocal()
{
	int num=5;
	cout<<"The NUmber is "<<num<<endl;
	num=99; // When Functions end, Local Variable Destryed..Thats why 99 is stored and when end functin,it destrys.................
}
int main()
{
	showlocal();
	showlocal();
	// Program Terminate
	return 0;
}
