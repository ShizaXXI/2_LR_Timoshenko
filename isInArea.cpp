#include <cstdlib>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

bool isInArea(double x, double y)
{
	if (x>=-1 && x<=0 && y>= -sqrt(1 - pow(x, 2)) && y<= sqrt(1 - pow(x, 2)))
		return true;
	else if (x>0 && x<=1 && y>-1 && y<1)
		return true;
	else return false;
}