// The Speed of Sound

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const double CARBON=258.0,
			     AIR=331.5,
			     HELIUM=972.0,
			     HYDROGEN=1270.0;
	
	
	int seconds;
	double Distance;
	int  choice;
	
	cout<<"\t\tTHE SPEED OF SOUND IN GASES\n\n";
	cout<<"1. Carbon Dioxide "<<endl;
	cout<<"2. Air"<<endl;
	cout<<"3. Helium "<<endl;
	cout<<"4. Hydrogen "<<endl;
	
	cout<<"Enter Your Choice"<<endl;
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"Enter Number of Seconds "<<endl;
		cin>>seconds;
		Distance=seconds*CARBON;
		cout<<Distance<<" metres far away the source of sound was from the detected Location"<<endl;
	}
	
	
	else if(choice==2)
	{
		cout<<"Enter Number of Seconds "<<endl;
		cin>>seconds;
		Distance=seconds*AIR;
		cout<<Distance<<" metres far away the source of sound was from the detected Location"<<endl;
	}
	
	
	
	else if(choice==3)
	{
		cout<<"Enter Number of Seconds "<<endl;
		cin>>seconds;
		Distance=seconds*HELIUM;
		cout<<Distance<<" metres far away the source of sound was from the detected Location"<<endl;
	}
	
	
	
	
	else if(choice==4)
	{
		cout<<"Enter Number of Seconds "<<endl;
		cin>>seconds;
		Distance=seconds*HYDROGEN;
		cout<<Distance<<" metres far away the source of sound was from the detected Location"<<endl;
	}


	else
	{
		cout<<"OOps!! Wrong input"<<endl;
	}


	// program terminate
	return 0;
	
}
