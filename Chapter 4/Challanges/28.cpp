// Restaurant Selector
// 1. Vegetarian, 2. Vegan, 3. Gluten-Free

// yes, yes, yes
// Corner Cafe
// The Chef's Kitchen

// yes, no, no
// Main Street Pizza Company
// Corner Cafe
// Mama's Fine Italian
// The Chef's Kitchen

// yes, yes, no
// Corner Cafe
// The Chef's Kitchen

// yes, no, yes
// Main Street Pizza Company
// Corner Cafe
// The Chef's Kitchen


// 1. Vegetarian, 2. Vegan, 3. Gluten-Free

// no, yes, yes
// Corner Cafe
// The Chef's Kitchen

// no, no, no
// Joe's Gourmet Burgers
// Main Street Pizza Company
// Corner Cafe
// Mama's Fine Italian
// The Chef's Kitchen

// no, yes, no
// Corner Cafe
// The Chef's Kitchen

// no, no, yes
// Main Street Pizza Company
// Corner Cafe
// The Chef's Kitchen


#include<iostream>

using namespace std;
int main()
{
	string vegetarian,vegan,gluten_free;
	cout<<"Enter Whether Member is Vegetarian?"<<endl;
	cin>>vegetarian;
	cout<<"Enter Whether Member is vegan?"<<endl;
	cin>>vegan;
	cout<<"Enter Whether Member is Gluten Free?"<<endl;
	cin>>gluten_free;
	
	if(vegetarian=="yes"&&vegan=="yes"&&gluten_free=="yes")
	{
		cout<<"Here are Restaurant Choices"<<endl;
		cout<<"Corner Cafe"<<endl;
		cout<<"The Chef's Kitchen"<<endl;
	}
	
	else if(vegetarian=="yes"&&vegan=="yes"&&gluten_free=="no")
	{
		cout<<"Here are Restaurant Choices"<<endl;
		cout<<"Corner Cafe"<<endl;
		cout<<"The Chef's Kitchen"<<endl;
	}
	
	else if(vegetarian=="yes"&&vegan=="no"&&gluten_free=="yes")
	{
		cout<<"Here are Restaurant Choices"<<endl;
		cout<<"Main Street Pizza Company"<<endl;
		cout<<"The Chef's Chicken"<<endl;
		cout<<"Corner Cafe "<<endl;
	}
	
	else if(vegetarian=="no"&&vegan=="yes"&&gluten_free=="yes")
	{
		cout<<"Here are Restaurant Choices"<<endl;
		cout<<"Corner Cafe"<<endl;
		cout<<"The Chef's Kitchen"<<endl;
	}
	
	
	else if(vegetarian=="no"&&vegan=="no"&&gluten_free=="no")
	{
		cout<<"Here are Restaurant Choices"<<endl;
		cout<<"Joe Gourmet Company"<<endl;
		cout<<"Corner Cafe"<<endl;
		cout<<"The Chef's Kitchen"<<endl;
		cout<<"Main Street Pizza Company"<<endl;
	}
	
	else if(vegetarian=="no"&&vegan=="no"&&gluten_free=="yes")
	{
		cout<<"Here are Restaurant Choices"<<endl;
		cout<<"Corner Cafe"<<endl;
		cout<<"The Chef's Kitchen"<<endl;
		cout<<"Main Street Pizza Company"<<endl;
	}
	
	else if(vegetarian=="no"&&vegan=="yes"&&gluten_free=="no")
	{
		cout<<"Here are Restaurant Choices"<<endl;
		cout<<"Corner Cafe"<<endl;
		cout<<"The Chef's Kitchen"<<endl;
	}
	
	else if(vegetarian=="yes"&&vegan=="no"&&gluten_free=="no")
	{
		cout<<"Here are Restaurant Choices"<<endl;
		cout<<"Main Street Pizza Company"<<endl;
		cout<<"The Chef's Chicken"<<endl;
		cout<<"Corner Cafe "<<endl;
		cout<<"Mama Fine Italian"<<endl;
		
	}
	
	else
	{
		cout<<"Irrelevant"<<endl;
	}
	
	// program terminate
	return 0;

}


// Agar do yes hon or aik no to ham select kr sakte..matlab hmara kam chalta 
// baki jo marxi available ho hamain kia
