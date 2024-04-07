
// Member Ship Fee Increase
#include<iostream>
using namespace std;
int main()
{
	//Constants
    int Charges=2500;
	const float increase=0.04;
	//Variable
	int i;
	double Total;
	//Use For Loop
	
	for(i=1;i<=6;i++)
	{
		Charges = Charges+(Charges*increase);
		cout<<"Rate is"<<Charges<<endl;
	}
	//Program Terminate
	return 0;
}
