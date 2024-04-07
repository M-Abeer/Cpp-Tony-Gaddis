// Ingredient Adjuster
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float sugar=1.5;
	float butter=1.0;
	float flour=2.7;
	double cookies=48;
	
	// Now calculate values for one cookie
	float c,s,b,f;
	s=sugar/cookies;
	b=butter/cookies;
	f=flour/cookies;
	// Now get Data from User
	cout<<"Enter Number of Cookies"<<endl;
	cin>>c;
	//Now we have to display number of cups needed
	cout<<"Ingredient Adjuster"<<endl;
	cout<<"\n---------------\n";
	cout<<setprecision(2)<<fixed<<endl;
	cout<<"Cups of Sugar=:"<<s*c<<endl;
	cout<<"Cups of Butter=:"<<b*c<<endl;
	cout<<"Cups of Flour=:"<<f*c<<endl;
	cout<<"Done"<<endl;
	return 0;	
}
