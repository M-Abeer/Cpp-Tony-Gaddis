// Kinetic Energy

#include<iostream>
using namespace std;
#include<iomanip>

double kineticEnergy(double mass, double velocity)
{
	double KE;
	KE=0.5*mass*velocity*velocity;
	return KE;
}

int main()
{
	double mass,velocity,K;
	//
	cout<<"Enter Mass"<<endl;
	cin>>mass;
	cout<<"Enter Velocity"<<endl;
	cin>>velocity;
	K=kineticEnergy(mass, velocity);
	cout<<"Kinetic Energy is "<<K<<endl;
	// Program Terminate
	return 0;
}
