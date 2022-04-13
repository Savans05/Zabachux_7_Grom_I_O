#include <iostream>
#include <math.h>

using namespace std;
int stepin(int a, int b)
{
	for (int i = 1; i <= b; i++)
	{
		a *= a;
	}
	return a;
}

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
	double R;
	int x, e;
	cout << "Enther x-> ";
	cin >> x;
	cout << "Enther e-> ";
	cin >> e;
	if (x>0)
	{
		R = 0;
		for (int i = 1; i < x; i++)
		{
			R += stepin(-1, i) / fac(i);
		}
	}
	else 
	{
		R = 1;
		for (int i = 1; i < 5; i++)
		{
			R *= (x * x - e) / i;
		}
	}
	return R;
}
