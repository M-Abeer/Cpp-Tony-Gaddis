// CP 4.29
#include<iostream>
using namespace std;
int main()
{
	
	int funny=7, serious=15;
	funny=serious*2;
	switch(funny)
	{
		case 0:
			cout<<"That is Funny"<<endl;
			break;
		case 30:
			cout<<"That is Serious"<<endl;
			break;
		case 32:
			cout<<"That is Seriously Funny"<<endl;
			break;
		default:
			cout<<"Funny"<<endl;
	}
	return 0;
}
