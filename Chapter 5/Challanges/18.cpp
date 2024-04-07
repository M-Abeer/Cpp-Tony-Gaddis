//Populaton Bar CHart
#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	ifstream ifs;
	ifs.open("People.txt");
	int number;
	int a;
	
	for(int i=1920;i<=2000;i+=20)
	{
		cout << i << " ";      //display years
		ifs >> number;   // Logic willbe also right of Previous Question
		for (int i = 0; i < number; i += 1000)	//increments of 1000
		{
			cout << "*";	//display astericks
		}
		cout << endl;
		
	}
	
	ifs.close();
}

