#include <math.h>
#include <iostream>
using namespace std;

float num = 0, err = 0;


void main() {
	
	cout << "Please enter a number you would like to test: ";

	cin >> num;

	cout << "\n\nPlease enter the allowable error: ";
	
	cin >> err;

	int sign = 1, k = 1, iterations = 0;
	float factorial = 6, xn1 = num, pwr = 2, n = 0, xn = 0;


	do {
		xn = xn1;
		sign = sign * -1;
		pwr = 2 * k + 1;
		xn1 = xn + sign * (pow(num,pwr)) / factorial;
		factorial = factorial * (pwr + 1) * (pwr + 2);
		k = k + 1;
		n = n + 1;
		iterations += 1;

	} while (abs(xn - xn1) > err);

	cout << xn1 << "\n\nSine was calculated in " << iterations << " iterations\n\n";

	system("pause");

}