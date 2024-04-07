// Area of Rectangles
#include<iostream>
using namespace std;
int main()
{
	// Variable Definition
	int length1,
		length2,
		width1,
		width2;
		
	double Area1,  // Rectangle 1
		   Area2;  // Rectangle 2
		   
	// Get Data from User
	cout<<"Enter Length and Width of first Rectangle"<<endl;
	cin>>length1>>width1;
	
	cout<<"Enter Length and Width of Second Rectangle"<<endl;
	cin>>length2>>width2;
	
	// calculations
	Area1=length1*width1;
	Area2=length2*width2;
	
	//
	if(Area1>Area2)
	{
		cout<<"Rectangle 1 has Greater Area which is "<<Area1<<endl;
	}
	else if(Area2>Area1)
	{
		cout<<"Rectangle 2 has Greater Area which is "<<Area2<<endl;
	}
	else
	{
		cout<<"They are same"<<endl;
	}
	// program terminate
	return 0;
}
