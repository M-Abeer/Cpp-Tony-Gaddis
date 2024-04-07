// EXample 6.23
#include<iostream>
using namespace std;
void showstatic();
int main()
{
	for (int count=0;count<5;count++)
		showstatic();
	// program terminate
	return 0;
}
void showstatic()
{
	static int num=5;  // Here we Initializedto 5.....
	cout<<"The Number is "<<num<<endl;
	num++;
}
