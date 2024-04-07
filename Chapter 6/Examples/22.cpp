// Example 6.22
#include<iostream>
using namespace std;
void showstatic();

int main()
{
	for(int count=0;count<5;count++)
		showstatic();
	//
	return 0;
}
void showstatic()
{
	static int n;  // if not initialized, automatically set to Zero
	// Static Variable not destroyed after ending of Funtion
	cout<<"Number is "<<n<<endl;
	n++;
}
