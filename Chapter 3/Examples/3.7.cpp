// OverFlow and UnderFlow
#include<iostream>
using namespace std;
int main()
{
	short Testvar=32767;
	//Display Test Variable
	cout<<Testvar<<endl;
	
	//Overflow
	Testvar+=1;
	cout<<Testvar<<endl;
	
	//UnderFlow
	Testvar-=1;
	cout<<Testvar<<endl;
	
	//Program Terminate
	return 0;
}
