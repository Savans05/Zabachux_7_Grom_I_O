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

double tfzad()
{
	double F = 0;
	int y, z, x, e,g;
	cout << "Enther y-> ";
	cin >> y;
	cout << "Enther z-> ";
	cin >> z;
	cout << "Enther x-> ";
	cin >> x;
	cout << "Enther e-> ";
	cin >> e;
	cout << "Enther g-> ";
	cin >> g;
	if (y<=-2)
	{
		int yzx = stepin(y, z + x);
		int ey = stepin(e, y);
		F= yzx*ey;
	}
	else 
	{
		for (int i = 1; i <4; i++)
		{
			F += i * g * (y + 2);
		}
	}
	return F;
}
