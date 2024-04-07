// Example 5.13
#include<iostream>
using namespace std;
int main()
{
	int game=1,
		points,
		total=0;
	cout<<"Enter Points of Games"<<game<<endl;
	cin>>points;
	while(points!=-1) // -1 is Sentinals....
	{
		total+=points;
		game++;
		cout<<"Enter Points of Games"<<game<<endl;
		cin>>points;
		
	}
	cout<<"The Totall Points are"<<total<<endl;
	return 0;
}
