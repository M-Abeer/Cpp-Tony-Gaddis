//Example 5.1
#include<iostream>
using namespace std;
int main()
{
	int num=4;
	
	//Display Value of Num
	cout<<num<<endl;
	cout<<"I will now increment num"<<endl;
	
	//Use postfix ++
	num++;
	cout<<num<<endl;
	
	//Use prefix ++
	++num;
	cout<<num<<endl;
	
	//Use prefix --
	--num;
	cout<<num<<endl;
	
	//Use postfix --
	num--;
	cout<<num<<endl;
	
	//Program terminate
	return 0;
}
