#include <iostream>
using namespace std;
int main()
{
	int a = 21;
	int b = 10;

	if (a && b)
	{
		cout << "Line 1 - condition is true" << endl;
	}

	if (a || b)
	{
		cout << "Line 2 - condition is true" << endl;
	}

	// Let's change the value of a and b

	a = 0;
	b = 10;

	if (a && b)
	{
		cout << "Line 3 - condition is true" << endl;
	}
	else
	{
		cout << "Line 4 - condition is not true" << endl;
	}

	if (!(a && b))
	{
		cout << "Line 5 - condition is true" << endl;
	}
}
