//kyle tompkins
//assign 0719
#include <iostream>
#include <Windows.h>

using namespace std;

void print_warning();
void print_okay();


int main()
{
	double miles_remaining, fuel_remaining, mpg, fuel_miles;

	cout << "How many miles are you from the next gas station? ";
	cin >> miles_remaining;
	cout << "How much fuel do you have left (in gallons)? ";
	cin >> fuel_remaining;
	cout << "What is your average miles to the gallon? ";
	cin >> mpg;

	fuel_miles = fuel_remaining * mpg;
	
	if (fuel_miles < miles_remaining)
	{
		print_warning();
	}
	else
	{
		print_okay();
	}

	return 0;
}

void print_warning()
{
	MessageBoxA(NULL, "Not enough gas!!", "WARNING!!", MB_OK | MB_ICONWARNING);
	cout << "WARNING" << endl << "Not enough gas" << endl;
}
void print_okay()
{
	cout << "You have enough gas" << endl;
}

//output:
//How many miles are you from the next gas station ? 10
//How much fuel do you have left(in gallons) ? 12
//What is your average miles to the gallon ? 30
//You have enough gas
//Press any key to continue . . .

//How many miles are you from the next gas station ? 1000
//How much fuel do you have left(in gallons) ? 1
//What is your average miles to the gallon ? 1
//WARNING
//Not enough gas
//Press any key to continue . . .



