// Movie Profit
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


struct MovieData
{
	string title;
	string director;
	int year_released;
	int running_time;  // in Minutes
	double cost;
	double firstyear_revenue;
};


// Function ProtoType
void showinfo(MovieData m);


int main()
{
	MovieData m;   // 
	
	// Read Data from SUer
	cout<<"Enter Title"<<endl;
	getline(cin,m.title);
	cout<<"Enter Director"<<endl;
	getline(cin,m.director);
	cout<<"Enter Year Released"<<endl;
	cin>>m.year_released;
	cout<<"Enter Runnning Time in Minutes"<<endl;
	cin>>m.running_time;
	cout<<"Enter Production Cost"<<endl;
	cin>>m.cost;
	cout<<"Enter First Year Revenue"<<endl;
	cin>>m.firstyear_revenue;
	
	// Call the FUnction
	showinfo(m);
	
	// Program terminate
	return 0;
}

void showinfo(MovieData m)
{
	cout<<"Title is  	"<<m.title<<endl;
	cout<<"Director      "<<m.director<<endl;
	cout<<"Year Released "<<m.year_released<<endl;
	cout<<"Running Time  "<<m.running_time<<endl;
	double a;
	a=m.firstyear_revenue/m.cost;
	
	if(m.firstyear_revenue-m.cost>0)
	{
		cout<<"Profit is "<<m.firstyear_revenue-m.cost<<endl;
	}
	
	if(m.firstyear_revenue-m.cost<0)
	{
		cout<<"Loss is   "<<m.firstyear_revenue-m.cost<<endl;
	}
}
