#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
double f(const double x);
int main()
{
	double xp, xk, z;
	int n;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "n = "; cin >> n;
	double dg = (xk - xp) / n;
	double t = xp;
	while (t <= xk)
	{
		z = f(t * t) + 2*f(2*t+1);
		cout << t << " " << z << endl;
		t += dg;
	}
	return 0;
}
double f(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (sin(x)+cos(x));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = pow(x, 2*i+1) / (((2*i+1)) * ((2 * i + 1) - 1) * (2 * i + 1)* (2 * i + 1)-2);
			a *= R;
			S += a;
		} while (i < 8);
		return S;
	}
}

