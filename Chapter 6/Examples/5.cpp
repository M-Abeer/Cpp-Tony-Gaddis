// Example 6.6
#include<iostream>
using namespace std;
void function1();// Function Prototype.. Another Way..Also Function Declaration,...From this we will write function below main..
void function2();

int main()
{
	cout<<"I am in Main Function\n";
	function1();
	function2();
	cout<<"Return to Main\n";
	
	//
	return 0;
}

//................................................
// Definition of First Function
void function1()
{
	cout<<"Function 1 Calls"<<endl;
}
//................................................
// Defintion of Second Function
void function2()
{
	cout<<"Function2 Calls"<<endl;
}


