// Math Tutor
#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>

int main()
{
	// Get time Of System
	unsigned seed=time(0);
	// Random Number Generator
	srand(seed);
	
	
	int a,b;
	a=rand();
	b=rand();
	
	cout<<"  "<<a<<endl;
	cout<<"+ "<<b<<endl;
	cout<<"_______"<<endl;
	int c;
	c=a+b;
	
	cout<<"Press Enter"<<endl;
	cin.get();
	cout<<endl;
	
	cout<<"  "<<a<<endl;
	cout<<"+ "<<b<<endl;
	cout<<"______"<<endl;
	cout<<"  "<<a+b<<endl;
	
	
	if(a+b==c)
	{
		cout<<"Congratulations!!"<<endl;
	}
	else
	{
		cout<<"Show Correct Answer"<<endl;
	}
	
	//Program Terminate
	return 0;
}
