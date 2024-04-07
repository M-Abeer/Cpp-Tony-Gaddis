#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;
const int SIZE = 5;

struct DrinkingMachine
{
	string name;
	double price;
	double money;
	double totalMoney;
	int inventory;
	DrinkingMachine()
	{     
		name = "";
		price = 0.00;
		inventory = 0;
	}

	int DrinkMachine(string n, double p, int i)
	{
		name = n;
		price = p;
		inventory = i;
	}
};

class DrinkManage {
private:
	DrinkingMachine drinks[SIZE];
	double sales;
	double inputMoney(int);


public:
	void displayChoices();
	void buyDrink(int n);
	void setup();
	double dailyReport();

};

void DrinkManage::setup()
{

	drinks[0].name = "Cola                 $";
	drinks[1].name = "Root Beer            $";
	drinks[2].name = "Lemon-Lime           $";
	drinks[3].name = "Grape Soda           $";
	drinks[4].name = "Water                $";
	for (int i = 0; i < SIZE; i++)
	{
		drinks[0].price = 0.65;
		drinks[1].price = 0.70;
		drinks[2].price = 0.75;
		drinks[3].price = 0.85;
		drinks[4].price = 0.90;
		drinks[i].inventory = 20;

	}
}

void DrinkManage::displayChoices()
{
	int bevChoice;

	
	for (int i = 0; i < SIZE; i++)
		cout << (i + 1)
		<< ") " << drinks[i].name
		<< setw(5) << setprecision(3)
		<< drinks[i].price << setw(10) << "	Qty:  "
		<< drinks[i].inventory << endl;
	cout << "\nSelect a drink(1-5) or enter 6 to quit: ";
	cin >> bevChoice;

	while (bevChoice < 0 || bevChoice > 6)
	{
		cout << "Invalid Entry. Please enter a value 1-5 " << endl;
		cin >> bevChoice;
	}
	if (bevChoice > 0 && bevChoice < 6)
	{
		bevChoice--;
		buyDrink(bevChoice);
	}
	
}

void DrinkManage::buyDrink(int bevChoice)
{
	double money, change, sales;
	bevChoice = bevChoice;

	money = inputMoney(bevChoice);
	if (money > 0)
	{
		change = (money - drinks[bevChoice].price);

		if (drinks[bevChoice].inventory > 0)
		{
			drinks[bevChoice].inventory -= 1;

			money -= change;

			sales = money;

			if (change > 0)
			{
				cout << "Change: $" << change << endl;
			}
		}
	else
	{
		cout << "SOLD OUT" << endl;
	}

	}

}



double DrinkManage::inputMoney(int bevChoice)
{
	double money;



	cout << fixed << showpoint << setprecision(2);
	cout << "Enter the amount of money you want to insert: ";
	cin >> money;

	if (money < drinks[bevChoice].price)
	{
		cout << "Insufficient Funds." << endl;
	}
	return money;
}

double DrinkManage::dailyReport()
{
	double sales = 0;

	cout << "Drink          Number Left \n";

	for (int i = 0; i < 5; i++)
	{
		cout << setw(10) << drinks[i].name << "         " << drinks[i].inventory << endl;
	}

	cout << "Total Revenue: " << sales << endl;

	return sales;
}

int main()
{

	DrinkManage check;
	char beverage;
	check.setup();
	do
	{
		check.displayChoices();

		cout << "Do you want to make another purchase? Please enter Y or N: ";
		cin >> beverage;

	} while (beverage == 'Y' || beverage == 'y');


	return 0;
}
