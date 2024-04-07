// Math Tutor
#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>




int main()
{
	//
	unsigned seed=time(0);
	//
	srand(seed);
	int a,b;
	a=rand();
	b=rand();
	cout<<a<<endl;
	cout<<"+"<<b<<endl;
	cout<<"-----\n\n\n\n\n";
	//cout<<a+b<<endl;
	
	// Ask user to press ENTER to continue
    cout << "Press \"Enter\" to see solution";
    cin.get();
    cout << endl;
	
	
	
	cout<<a<<endl;
	cout<<"+"<<b<<endl;
	cout<<"-----\n";
	cout<<a+b<<endl;
}
