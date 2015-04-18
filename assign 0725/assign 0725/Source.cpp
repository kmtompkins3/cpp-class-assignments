//kyle tompkins
//assign 0725
#include <iostream>

using namespace std;

int x = 0;

int incx();

int main()
{
	int y;

	cout << "Enter a number: ";
	cin >> y;

	for (y = y; y != 0; y--)
	{
		cout << incx() << endl;
	}
	return 0;
}

int incx()
{
	return (x++);
}

//output:
//Enter a number : 5
//0
//1
//2
//3
//4
//Press any key to continue . . .
