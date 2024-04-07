//

#include <iostream>
using namespace std;

int main()
{
	const int size = 25;

	int array1[size];
	int array2[size];

	for (int x = 0; x < size; x++)
	{
		cout << x + 1 << " Enter a number: ";
		cin >> array1[x];
	}


	for (int x = 0; x < size; x++)
	{
		array2[x] = array1[x];
		cout << x + 1 << " Array 2 is: " << array2[x] << endl;
	}

	cout << array1 << endl;

	return 0;
}
