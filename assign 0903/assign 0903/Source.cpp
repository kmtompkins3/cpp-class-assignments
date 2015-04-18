#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x[100];
	int n;
	double root_n;

	for (n = 1; n <= 100; n++)
	{
		root_n = sqrt(n);
		x[n] = root_n;
	}
	n = 1;
	for (n = 1; n <= 100; n++)
	{
		cout << x[n] << endl;
	}
	return 0;
}