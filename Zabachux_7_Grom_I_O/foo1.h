#include <iostream>
#include <math.h>

using namespace std;

int tfzad()
{
	double Y, n,e,g,x;
	cout << "Enther n-> ";
	cin >> n;
	cout << "Enther e-> ";
	cin >> e;
	cout << "Enther g-> ";
	cin >> g;
	cout << "Enther x-> ";
	cin >> x;

	if (n>=2)
	{
		Y = 1;
		for (int i = 1; i <= n; i++)
		{
			Y *= pow(e, i);
		}
	}
	else {
		Y = 0;
		for (int i = 1; i < 4; i++)
		{
			Y += (1 * g*(x / i) + 1 * g*(x / i));
		}
	}
	return Y;
}