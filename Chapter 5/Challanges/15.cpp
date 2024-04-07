// Includes
#include <iostream>
#include <conio.h>
using namespace std;

// Main Function
int main()
{
	cout << "This will display a payroll report.\n\n";

	// Loop to do everything
		int employeenum;
		
		cout << "Enter the employee number: ";
		cin >> employeenum;		
	while (employeenum != 0)
	{
		float gross, statetax, federaltax, fica;
		double spay, fpay, ficapay, netpay;



		cout << "Enter gross pay: $";
		cin >> gross;
		cout << "Enter state tax percent in decimal form (EX. 40% = .40): ";
		cin >> statetax;
		cout << "Enter federal tax percent in decimal form (EX. 40% = .40): ";
		cin >> federaltax;
		cout << "Enter FICA withholdings: $";
		cin >> fica;
			
		cout << "\n\n";

		// What hapens went a negative number is entered
		while (employeenum < 0 || gross < 0 || statetax < 0 || federaltax <  0 || fica < 0)
		{
			// Makes user re-enter data because user entered a number less than 0
			cout << "Re-enter data must be greter than 0: ";
			cin >> employeenum;
			cout << "$ ";
			cin >> gross;
			cin >> statetax;
			cin >> federaltax;
			cout << "$ ";
			cin >> fica;
		}
		// Calculations
		
		
		spay = gross * statetax;
		fpay = gross * federaltax;
		ficapay = gross - fica;
		netpay = spay - fpay - fica;
		
		
		
		
		cout << "Payroll Report:\n\n";
		cout << "The Employee Number is: " << employeenum << endl;
		cout << "You gross pay is: $" << gross << endl;
		cout << "Your state tax total is: $" << spay << endl;
		cout << "Your federal tax total is: $" << fpay << endl;
		cout << "Your FICA pay is: $" << fica << endl;
		cout << "Your total netpay is: $" << netpay << endl;
		
		
		
		
		cout << "Enter the employee number: ";
		cin >> employeenum;
		
		
	} 
	getch();
	return 0;
}


