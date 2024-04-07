// Example 7.20
#include<iostream>
using namespace std;
#include<iomanip>

//
void getTestScore(double testScore[], int size) // testScore[] used as reference variable
{
	cout<<endl;
	int i=0;
	for(i=0;i<size;i++)
	{
		cout<<"Enter Test Score "<<(i+1)<<endl;
		cin>>testScore[i];
	}
	cout<<endl;
	cout<<endl;


}



double getTotal(const double gettotal[],int size)
{
	double total=0;
	
	for(int i=0;i<size;i++)
	
	{
		total=total+gettotal[i];
	}
	
	return total;
}



double getLowest(const double testScore[],int size)
{
	
	int low;
	low=testScore[0];

	for(int i=0;i<size;i++)
	{

		if(testScore[i]<low)
			low=testScore[i];

		return low;
	}
	
}

int main()
{
	const int size=4;
	double testScore[size];
	double lowest,average;
	int total=0;
	// Test Score
	getTestScore(testScore,size);
	// Add them
	total=getTotal(testScore,size);
	// Find Lowest
	lowest=getLowest(testScore,size);
	// Subtract lowest from Total
	total-=lowest;
	average=(total/(size-1));
	//
	cout<<setprecision(2)<<fixed<<showpoint<<endl;
	cout<<"Average is "<<setw(2)<<average<<endl;
	// Program terminate
	return 0;
	
}
