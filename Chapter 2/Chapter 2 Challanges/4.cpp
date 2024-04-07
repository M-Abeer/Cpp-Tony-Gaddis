// Restaurant Bill
#include<iostream>
using namespace std;
int main()
{
	double Total=88.67;
	double Tax=0.067;
	double Tax_Amount,Tip_Amount;
	double Tip=0.20;
	double Bill;
	//Display Meal Cose
	cout<<"Meal Cost is "<<Total<<endl;
	//Tax Amount
	Tax_Amount=Total*Tax;
	cout<<"Tax Amount is "<<Tax_Amount<<endl;
	//Display Tip Amount
	Tip_Amount=(Total+Tax_Amount)*Tip;
	cout<<"Tip Amount is "<<Tip_Amount<<endl;
	//Display Total Bill
	Bill=Total+Tax_Amount+Tip_Amount;
	cout<<"The Total BILL is "<<Bill<<endl;
	return 0;
	
	
	
	
	
}
	/*int main()
{
    float mealCharge = 88.67,
          taxPercentage = .0675,
          tipPercentage = .20,
          mealChargeTaxAmount = mealCharge * taxPercentage,
          mealChargeTipAmount = (mealCharge + mealChargeTaxAmount) * tipPercentage;

    //cout << setprecision(2) << fixed;
    cout << "\nMeal cost : $" << mealCharge << endl;
    cout << "Tax amount: $" << mealChargeTaxAmount << endl;
    cout << "Tip amount: $" << mealChargeTipAmount << endl;
    cout << "Total bill: $" << mealCharge + mealChargeTaxAmount + mealChargeTipAmount << endl << endl;

    return 0;      */


