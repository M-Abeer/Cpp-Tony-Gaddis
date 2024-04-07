// Fat Gram Calculator
#include<iostream>
using namespace std;
int main()
{
	// Variable 
	float Calories,Fat_Grams,Calories_From_Fat;
	
	float Percentage_of_Calories;
	
	// Read data from user]
	cout<<"Enter Calories"<<endl;
	cin>>Calories;
	cout<<"Enter Fat Grams"<<endl;
	cin>>Fat_Grams;
	if(Calories<0||Fat_Grams<0)
	{
		cout<<"Invalid"<<endl;
	}
	
	
	Calories_From_Fat=Fat_Grams*9;
	
	Percentage_of_Calories=Calories_From_Fat/Calories;
	
	if(Calories_From_Fat<0.3*Calories)
	{
		cout<<"Food is Low in Fat"<<endl;
	}
	if(Calories_From_Fat<Calories)
	{
		cout<<"Wrong Input"<<endl;
	}
	cout<<"Percentage of Calories are "<<Percentage_of_Calories<<endl;
	
}
