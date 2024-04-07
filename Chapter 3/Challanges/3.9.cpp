// How many Calories?

#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	const int SERVING=10;
	const int Cookies=30;
	const int OneServing=300;  //Calories
	int Cookies_per_Serving;
	int Calories_per_Serving;
	int Calories_per_Cookie;
	int CookiesEaten;
	int Total_Calories;
	
	
	
	
	Cookies_per_Serving=Cookies/SERVING;
	Calories_per_Serving=Cookies_per_Serving*100;
	Calories_per_Cookie=Calories_per_Serving/Cookies_per_Serving;
	
	
	cout<<"Enter Number of Cookies Eaten"<<endl;
	cin>>CookiesEaten;
	
	Total_Calories=CookiesEaten*Calories_per_Cookie;
	
	cout<<"Total Calories Consumed"<<endl;
	cout<<Total_Calories;
	
	
	// Program Terminate
	return 0;
}
