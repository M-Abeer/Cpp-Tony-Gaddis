// Lottery Application

#include<iostream>
using namespace std;
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<ctime>


int main()
{
	// Constants
	const int size=5;
	const int MAXIMUN=9;
	const int MINIMUM=0;
	unsigned seed=time(0);
	srand(seed);
	// Lottery Array
	int Lottery[size]={7,4,9,1,3};
	
	int User[size];
	
	// Read data from random Numbers
	int i;
	for(i=0;i<size;i++)
	{
		User[i]=(rand() % (MAXIMUN-MINIMUM+1))+MINIMUM; 
	}
	
	// Display Lottery Array
	cout<<"Lottery Array"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<Lottery[i]<<endl;
	}
		
	// Display random Anumber Generated user Array
	cout<<"User Array"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<User[i]<<endl;
	}
	
	// ..............................................
	// Now I have to Display Number of Matching Digits
	
	int count=0;
	
	//bool equal;
	
	// Logic
	for(int i = 0; i < size; i++)
	{
         if(User[i] == Lottery[i])
         {
            count++;        		
         }                     
	}
	//
	cout<<"The Number of Digits that are Equal are "<<count<<endl;	
	if(count==5)
    {
       	cout<<"Grand Price Winner"<<endl;
	}
	else
	{
		cout<<"OOps"<<endl;
	}

	// Program terminte
	return 0;
}
