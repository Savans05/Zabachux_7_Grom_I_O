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

double tfzad()
{
	double p,a;
	cout << "Enther a-> ";
	cin >> a;
	if (2<a && a<100)
	{
		p = 0;
		for (int i = 0; i < 15; i++)
		{
			p += a / (pow(4, i) + pow(5, i + 2));
		}
	}
	else {
		p = 1;
		for (int i = 2; i < 10; i++)
		{
			p *= (1 - 1 / fac(i));
		}
	}
	return p;
}
