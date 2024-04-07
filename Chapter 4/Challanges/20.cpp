// Speed of Sound
#include<iostream>
using namespace std;
int main()
{
	//
	const int AIR_S=1100,
			  WATER_S=4900,
			  STEEL_S=16400;
			  
	int choice;
	float Distance,Time;
	
	// Read Data from user
	
	// Display Menu
	cout<<"\t\t\t=================="<<endl;;
	cout<<"\t\t\tTHE SPEED OF SOUND\n";
	cout<<"\t\t\t=================="<<endl;
	cout<<"\tEnter your Choice"<<endl;
	cout<<"\t1. Air"<<endl;
	cout<<"\t2. Water"<<endl;
	cout<<"\t3. Steel"<<endl;
	cout<<"\t4. Quit"<<endl;
	cout<<"----------------------"<<endl;;
	
	
	cin>>choice;
	cout<<"Enter Distnace"<<endl;
	cin>>Distance;
	
	if(Distance<0)
	{
		cout<<"Invalid Input"<<endl;
	}
	else
	{
		if(choice==1)
		{
			Time=Distance*1.0f/AIR_S;
			cout<<"Time is "<<Time<<endl;
		}
		else if(choice==2)
		{
			Time=Distance*1.0f/WATER_S;
			cout<<"Time is "<<Time<<endl;
		}
		else if(choice==3)
		{
			Time=Distance*1.0f/STEEL_S;
			cout<<"Time is "<<Time<<endl;
		}
		else if(choice==4)
		{
			cout<<"Quit the Program"<<endl;
		}
		else
		{
			cout<<"Invalid Input"<<endl;
		}
	}
	
	
	// Program terminate
	return 0;
}
