// Color Mixer
#include<iostream>
using namespace std;
#include<string>

int main()
{
	string color1,
		   color2;
		   
	// Get Color
	cout<<"Enter Color 1"<<endl;
	getline(cin,color1);
	cout<<"Enter Color 2"<<endl;
	getline(cin,color2);
	
	if(color1=="Red")
	{
		if(color2=="Blue")
		{
			cout<<"It Produce Purple olor"<<endl;
		}
		else if(color2=="Yellow")
		{
			cout<<"It produces Orange Color"<<endl;
		}
		
		
	}
			
	else if(color1=="Blue")
	{
		if(color2=="Yellow")
		{
			cout<<"It produces green Color"<<endl;
		}
		else if(color2=="Red")
		{
			cout<<"It produces Purple Color"<<endl;
		}
		
	}
	else if(color1=="Yellow")
	{
		if(color2=="Red")
		{
			cout<<"It produces Orsnge Color"<<endl;
		}
		else if(color2=="Blue")
		{
			cout<<"It produces Green Color"<<endl;
		}
		
	}
	else
	{
		cout<<"Invalid"<<endl;
	}
	
	// Program terminate
	return 0;
}
