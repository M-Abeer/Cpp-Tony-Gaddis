// CP 5.5
#include<iostream>
using namespace std;
int main()
{
	int count=0,number=0,limit=4;
	do
	{
		number+=2;
		count++;
	}while(count<limit);
	cout<<number<<"\t"<<count<<endl;
	return 0;
}
