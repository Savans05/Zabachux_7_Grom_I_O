#include <iostream>
#include <math.h>

using namespace std;


int fac(int g)
{
	for (int i = 1; i < g; i++)
	{
		g *= i;
	}
	return g;
}

int tfzad()
{
	double Y, n;
	cout << "Enther n-> ";
	cin >> n;

	if (n < 10)
	{
		Y = 0;
		for (int i = 1; i <= n; i++)
		{
			Y += 1 / pow(i,5);
		}
	}
	else {
		Y = 1;
		for (int i = 1; i < 10; i++)
		{
			Y *= (2 + (1 / fac(i)));
		}
	}
	return Y;
}
