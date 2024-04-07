// Male and Female Percentage
#include<iostream>
using namespace std;

int main()
{
	
	float male,female;
	double total;
	double Percentage_m,Percentage_f;
	//Get Data from User
	cout<<endl;
	cout<<"Enter Number of Males in a Class"<<endl;
	cin>>male;
	cout<<"Enter Number of Females in a Class"<<endl;
	cin>>female;
	//Calculate Total
	total=male+female;
	//Calculate Percentage of Males
	Percentage_m=(male/total)*100;
	//Calculate Percentage of Females
	Percentage_f=(female/total)*100;
	//Display Results
	cout<<"Males and Females Percentages"<<endl;
	cout<<"\n-----------\n";
	//Display Percentage of Males
	cout<<"Percentage of Males in Class is "<<Percentage_m<<endl;
	//Display Percentage of Females
	cout<<"Percentage of Females in Class is "<<Percentage_f<<endl;
	cout<<"Done"<<endl;
	return 0;
	
	
	
	
}
