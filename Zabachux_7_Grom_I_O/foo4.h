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

int tfzad()
{
	double Y, n, m, o, x,g,e;
	cout << "Enther n-> ";
	cin >> n;
	cout << "Enther m-> ";
	cin >> m;
	cout << "Enther o-> ";
	cin >> o;
	cout << "Enther x-> ";
	cin >> x;
	cout << "Enther g-> ";
	cin >> g;
	cout << "Enther e-> ";
	cin >> e;
	Y = 0;

	if (n>m && n>0)
	{
		for (size_t i = 1; i < n; i++)
		{
			Y += (o * o + g * i) / (i * i);
		}
	}
	else if (m>n && m>0) 
	{
		for (int i = 1; i < m; i++)
		{
			Y += (n * x + stepin(e, i)) / (x * fac(i));
		}
	}
	return Y;
}
