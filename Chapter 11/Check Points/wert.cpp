// 
#include<iostream >
using namespace std;
struct Town
{
	string name,country;
	int population;
	double elevation;
};
int main()
{
	Town t={"Abeer","Pakistan",99876};
	cout<<t.elevation;
}
