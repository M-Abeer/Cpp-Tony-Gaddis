// Cos inverse function 

#include <iostream>
#include <cmath>

#define PI 3.141592654
using namespace std;

int main()
{
	double x = 13.21, result;
	result = acosh(x);

	cout << "acosh(x) = " << result << " radian" << endl;

	// result in degrees
	cout << "acosh(x) = " << result*180/PI << " degree" << endl;

	return 0;
}

// All other trigonometric identitiess will be done according to this pattern
