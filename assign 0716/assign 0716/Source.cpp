//kyle tompkins
//assing 0726
#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double celsius);
double get_celsius();

int main()
{
	double fahrenheit;
	double celsius = get_celsius();

	fahrenheit = celsius_to_fahrenheit(celsius);

	cout << celsius << " C = " << fahrenheit << endl;

	return 0;
}

double celsius_to_fahrenheit(double celsius)
{
	return(celsius * (9.0 / 5.0) + 32.0);
}

double get_celsius()
{
	double celsius_in;

	cout << "Enter the temperature in Celsius: ";
	cin >> celsius_in;

	return celsius_in;
}