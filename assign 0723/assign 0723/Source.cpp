//kyle tompkins
//assign 0723
#include <iostream>
#include <ctype.h>

using namespace std;

char c;

char upper_to_lower();
char lower_to_upper();

int main()
{
	do
	{
		cout << "Enter a uppercase number or lowercase number: ";
		cin >> c;
	} while (!(isupper(c) || islower(c)));

	if (isupper(c))
	{
		cout << upper_to_lower() << endl;
	}
	if (islower(c))
	{
		cout << lower_to_upper() << endl;
	}
}

char upper_to_lower()
{
	return(tolower(c));
}

char lower_to_upper()
{
	return(toupper(c));
}

//output:

//Enter a uppercase number or lowercase number : a
//A
//Press any key to continue . . .

//Enter a uppercase number or lowercase number : A
//a
//Press any key to continue . . .

//Enter a uppercase number or lowercase number : 1
//Enter a uppercase number or lowercase number : A
//a
//Press any key to continue . . .