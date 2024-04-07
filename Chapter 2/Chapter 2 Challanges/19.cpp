//Annual High Temperature
#include<iostream>
using namespace std;

int main()
{
	int NewYork=85;
	int Denver=88;
	int Phoenix=106;
	
	double NewYork_Temp;
	double Denver_Temp;
	double Phoenix_Temp;
	
	NewYork_Temp=NewYork*0.02;
	Denver_Temp=Denver*0.02;
	Phoenix_Temp=Phoenix*0.02;
	
	cout<<"Rise in Temperature of NewYork is "<<NewYork_Temp<<endl;
	cout<<"Rise in Temperature of Denver is "<<Denver_Temp<<endl;
	cout<<"Rise in Temperature of  Phoenix ix "<<Phoenix_Temp<<endl;
	
	double nN;
	double nD;
	double nP;
	
	nN=NewYork+NewYork_Temp;
	nD=Denver+Denver_Temp;
	nP=Phoenix+Phoenix+Phoenix_Temp;
	
	cout<<"New Temperature is"<<nN<<endl;
	cout<<"New Temperature is"<<nD<<endl;
	cout<<"New Temperature is"<<nP<<endl;
	
	return 0;
}
