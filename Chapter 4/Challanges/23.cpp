// Geometry calculator
#include<iostream>
using namespace std;
int main()
{
	int choice;
	float b,h,l,w,r;
	double Area;
	/// Display Menu for User
	cout<<"\t\t\t\t*******************\n";
	cout<<"\t\t\t\tGEOMETRY CALCULATOR\n\n\n"<<endl;
	cout<<"1. Calculate the Area of Circle"<<endl;
	cout<<"2. Calculate the Area of Rectangle"<<endl;
	cout<<"3. Calculate the Area of Triangle"<<endl;
	cout<<"4. Quit"<<endl;
	
	cout<<"Enter Your Choice"<<endl;
	cin>>choice;
	
	if(choice==1)
	{
			float r;
			cout<<"Enter radius"<<endl;
			cin>>r;
		if(r>0)
		{
			const float PI=3.14159f;
			Area=PI*r*r;
			cout<<"Area of Circle is "<<Area<<endl;
		}
		else
		{
			cout<<"Enter Poitive Value of radius"<<endl;
		}
	}
	else if(choice==2)
	{
			float l,w;
			cout<<"Enter Length and Width"<<endl;
			cin>>l>>w;
		if(l>0&&w>0)
		{
			Area=l*w;
			cout<<"Area of rectangle is "<<Area<<endl;
		}
		else
		{
			cout<<"Enter Positive value of Length and Width"<<endl;
		}
	}
	else if(choice==3)
	{
			cout<<"Enter Base and Height"<<endl;
			cin>>b>>h;
		if(b>0&&h>0)
		{
			Area=b*h*.5;
			cout<<"Area of a Triangle is "<<Area<<endl;
		}
		else
		{
			cout<<"Enter Positive value of Base and Height"<<endl;
		}
	}
	else if(choice==4)
	{
		cout<<"Quit the Program"<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	
	
	// Program terminate
	return 0;
}
