#include <cstdlib>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double f(double x)
{
	double y;
	if (x <= 3)
		y = pow(x, 2) - 3 * x + 9;
	else y = 1 / (pow(x, 3) + 6);
	return y;
}