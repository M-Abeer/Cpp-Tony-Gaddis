// CP 6.5
#include<iostream>
using namespace std;

void qualify()
{
	cout<<"You are Qualified fornthe Card"<<endl;
	cout<<"Annual Interest rate is 12%"<<endl;
	//cout<<"Which is "<<Salary*0.12<<endl;
}

void noqualify()
{
	cout<<"You does not Qualify for Card"<<endl;
	cout<<"Because you are not working for current job from 2 Years and and donot earn 17000$ per year\n";
}

int main()
{
	double Salary;
	int Years;
	cout<<"This Program will Determine whether you are applicable for Card or Not"<<endl;
	
	cout<<"What is Your Annual Salary"<<endl;
	cin>>Salary;
	
	cout<<"For Hoe many Years You are Working?"<<endl;
	cin>>Years;
	
	if(Years>=2&&Salary>=17000.0)
	{
		qualify();
	}
	else
	{
		noqualify();
	}
	
	// Program Terminate
	return 0;
}
