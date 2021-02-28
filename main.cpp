#include <cstdlib>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

bool isInArea(double x, double y);
double f(double x);
void main()
{
	double x;
	double y;

	int a;
	printf("Enter task number: ");
	cin >> a;
	switch (a)
	{
	case 1:
		printf("\nTask 1: ");
		printf("\nx = ");
		cin >> x;
		printf("\ny = ");
		cin >> y;

		printf("\nResult: ");
		cout << isInArea(x, y) << endl;
		break;
	case 2:
		printf("\nTask 2: ");
		printf("\nx = ");
		cin >> x;
		
		printf("Result: f(x) = ");
				cout << f(x)<< endl;
		break;
	default:
		printf("Incorrect input");
		break;
	};
}