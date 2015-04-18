//kyle tompkins
//assing 0906
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int array_size = 32;
	int daily_temp[array_size];
	int num_values;
	int index;
	float average_high;
	int total = 0;
	int max = INT_MIN;
	int min = INT_MAX;
	//max = 0;
	//min = 0;

	do
	{
		cout << "Enter the number of days for which you have data: ";
		cin >> num_values;
		if ((num_values < 1) || (num_values > array_size - 1));
		{
			cout << "The number of days must be in the range 1 to " << array_size - 1 << endl;
		}
	} while ((num_values < 1) || (num_values > array_size - 1));

	for (index = 1; index <= num_values; index++)
	{
		cout << "Enter the high temperature for day " << index << ": ";
		cin >> daily_temp[index];
		if (daily_temp[index] < min)
		{
			min = daily_temp[index];
		}
		if (daily_temp[index] > max)
		{
		    max = daily_temp[index];
		}
	}

	cout << "The array contains high temperatures for " << num_values << " days." << endl;
	cout << "the values are as follows." << endl;

	for (index = 1; index <= num_values; index++)
	{
		cout << "Day " << index << ": " << daily_temp[index] << endl;
		total = total + daily_temp[index];
	}

	average_high = float(total) / float(num_values);

	cout << "the average high temperature during the " << num_values << "-day period was " << setprecision(2) << average_high << " degrees." << endl;
	cout << "Max temperature: " << max << endl;
	cout << "Min temperature: " << min << endl;

	return 0;
}

//Enter the number of days for which you have data : 3
//The number of days must be in the range 1 to 31
//Enter the high temperature for day 1 : 1
//Enter the high temperature for day 2 : 2
//Enter the high temperature for day 3 : 3
//The array contains high temperatures for 3 days.
//the values are as follows.
//Day 1 : 1
//Day 2 : 2
//Day 3 : 3
//the average high temperature during the 3 - day period was 2 degrees.
//Max temperature : 3
//Min temperature : 1
//Press any key to continue . . .