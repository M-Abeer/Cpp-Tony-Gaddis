// CP 6.4
#include<iostream>
using namespace std;
void function1()
{
	cout<<"Able was I\n";
}

void function2()
{
	cout<<"I saw Elba\n";
}

int main()
{
	int input;
	// Read Data from User
	cout<<"Enter Input "<<endl;
	cin>>input;
	if(input<10)
	{
		function1();
		function2();
	}
	else
	{
		function2();
		function1();
	}
	// Program Terminate
	return 0;
}
