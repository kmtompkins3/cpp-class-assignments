#include <iostream>

using namespace std;

void negative();
void zero();
void positive();

int x;

int main()
{
	cout << "Enter an integer: ";
	cin >> x;

	if (x < 0)
	{
		negative();
	}
	if (x == 0)
	{
		zero();
	}
	if (x > 0)
	{
		positive();
	}


	return 0;
}

void negative()
{
	cout << x << " Is negative" << endl;
}

void zero()
{
	cout << x << " Is zero" << endl;
}
void positive()
{
	cout << x << " Is positive" << endl;
}

//output:

//Enter an integer : 1
//1 Is positive
//Press any key to continue . . .

//Enter an integer : 0
//0 Is zero
//Press any key to continue . . .

//Enter an integer : -1
//- 1 Is negative
//Press any key to continue . . .