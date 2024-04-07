// Ch pOINT 5.2
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter Number"<<endl;
	cin>>num;
	while(num<10||num>25)
	{
		cout<<"Error"<<endl;
		cout<<"Enter Number in Range of 10 to 15"<<endl;
		cin>>num;
	}
	cout<<"Done"<<endl;
	return 0;
}
