// Example 4.2
#include<iostream>
using namespace std;
int main()
{
	const int HIGH_SCORE=95;
	int a,b,c;
	float Average;
	
	//
	cout<<"Enter Marks of Three Subjects"<<endl;
	cin>>a>>b>>c;
	Average=(a+b+c)/3.0;
	
	cout<<"Average is "<<Average<<endl;
	
	// Use if Condition
	if(Average>HIGH_SCORE)
		cout<<" congratulations!! You got First Position in the exam"<<endl;
		
		// program terminate
		return 0;
}
