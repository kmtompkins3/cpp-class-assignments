//kyle tompkins
//assign 0722
#include <iostream>
#include <math.h>

using namespace std;

int area;
const double PI = 3.1415926535;

double circomference();

int main()
{
	cout << "Enter the area of the circle: ";
	cin >> area;
	cout << circomference() << endl;

	return 0;
}

double circomference()
{
	return (2 * sqrt(PI * area));
}