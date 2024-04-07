// Prime number List
// Using Function
#include<iostream>
#include<fstream>
using namespace std;
bool prime(int);

int main()
{
	int i;
	ofstream ofs;
	ofs.open("Prime.txt");
	
	for(i=1;i<=100;i++)
	{
		if(prime(i))
		{
			ofs<<i<<endl;
			cout<<"Data Successfully Written"<<endl;
		}
		else
		{
			cout<<"Sorry"<<endl;
		}
	}
	
	ofs.close();
	// Proram terminate
	return 0;
}

// Function

bool prime(int number)
{
	int Prime=0;
	for(int i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			Prime++;
		}
	}
	if(Prime==2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
