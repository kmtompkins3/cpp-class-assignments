//full working version
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int x = 0;

void number_to_month();

int main()
{
	char answer = 'n';
	do
	{
		answer = 'n';
		x = 0;
		vector<int>rainfall(14, 0);
		double average;
		int max = INT_MIN;
		int min = INT_MAX;
		double sum = 0;

		for (x = 0; x < 12; x++)
		{
			cout << "Enter rainfall for "; number_to_month(); cout << " : ";
			cin >> rainfall[x];
			if (rainfall[x] < 0)
			{
				x = 12;
			}
			else
			{
				sum = rainfall[x] + sum;
				if (rainfall[x] > max)
				{
					max = rainfall[x];
				}
				if (rainfall[x] < min)
				{
					min = rainfall[x];
				}
			}
		}
		if (rainfall[x] >= 0 && x == 12)
		{
			average = sum / 12;
			cout << "Greatest = " << max << endl;
			cout << "Lowest = " << min << endl;
			cout << "Average = " << average << endl;
		}
		else
		{
			cout << "Negitive numbers are not allowed" << endl;
			cout << "Would you like to try again (y/n): ";
			do
			{
				cin >> answer;
			} while (answer != 'y' && answer != 'n');
		}
	} while (answer == 'y');

	return 0;
}

void number_to_month()
{
	//string month;
	switch (x)
	{
	case 0:
		cout << "January";
		break;
	case 1:
		cout << "February";
		break;
	case 2:
		cout << "March";
		break;
	case 3:
		cout << "April";
		break;
	case 4:
		cout << "May";
		break;
	case 5:
		cout << "June";
		break;
	case 6:
		cout << "July";
		break;
	case 7:
		cout << "August";
		break;
	case 8:
		cout << "September";
		break;
	case 9:
		cout << "October";
		break;
	case 10:
		cout << "November";
		break;
	case 11:
		cout << "December";
		break;
	}
}