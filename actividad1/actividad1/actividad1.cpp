#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	float x, y;
	cout << "ingrse el valor de x: ";
	cin >> x;
	if (x < 0 || x >50)
	{
		y = 0;
	}
	else if (x <= 25)
	{
		y = 4 / x;
	}
	else if (x <= 25)
	{
		y = pow(x, 3) + pow(x, 3) - 18;
	}
	cout << "el valor de x: " << x << " el valor de y: " << y << endl;
	return 0;
}

