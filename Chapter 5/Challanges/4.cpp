//Calories Burner
#include<iostream>
using namespace std;
int main()
{
	const float Calories_Per_Minute=3.6;
	double No_of_Calories_Burn;
	int i;
	// Use for Loop
	for(i=5;i<=30;i+=5)
	{
		No_of_Calories_Burn=Calories_Per_Minute*i;
		// DisPLAY rEPORT
		cout<<"Number of calories burn after "<<i<<" years are "<<No_of_Calories_Burn<<endl;
	}
	//Program Terminate
	return 0;
}
