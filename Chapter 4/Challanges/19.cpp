// Spectral Analysis
#include<iostream>
using namespace std;
int main()
{
	double wave;
	//Read Data
	cout<<"Enter WaveLength"<<endl;
	cin>>wave;
	
	if(wave>=1E-2)
	{
		cout<<"Radio waves"<<endl;
	}
	
	else if(wave<1E-2&&wave>=1E-3)
	{
		cout<<"Micro Waves"<<endl;
	}
	
	else if(wave<1E-3&&wave>=7E-7)
	{
		cout<<"Infrared"<<endl;
	}
	
	else if(wave<7E-7&&wave>=4E-7)
	{
		cout<<"Visible Light"<<endl;
	}
	
	else if(wave<4E-7&&wave>=1E-8)
	{
		cout<<"Ultraviolet"<<endl;
	}
	
	
	else if(wave<1E-8&&wave>=1E-11)
	{
		cout<<"Radio waves"<<endl;
	}
	
	
	
	// Program Terminate
	return 0;

}
