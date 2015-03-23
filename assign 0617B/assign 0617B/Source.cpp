//kyle tompkins
//adv c++ period 3
//assign 0617
//2/5/15
#include <iostream>

using namespace std;

int main()
{
	int number = 1;//1-3
	int number2 = 1;//1-2

	for (number2 = 1; number2 <= 2; number2++)//number for A 1-2
	{
		cout << 'A' << number2;

		for (number = 1; number <= 3; number++)//number for B 1-3
		{
			cout << 'B' << number;
		}
	}
	cout << endl;
	return 0;
}
//A1B1B2B3A2B1B2B3
//Press any key to continue . . .




