// tan inverse x

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	double x = 0.32, result;

	result = atanh(x);
	cout << "atanh(x) = " << result << " radian" << endl;

	// result in degrees
//	cout << "atanh(x) = " << result*180/PI << " degree" << endl;
	
	return 0;
}
