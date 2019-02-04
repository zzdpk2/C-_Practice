// FindPi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

double arctan(double x);

int main(){

	cout << "The estimating value of PI is "
		<< 16 * arctan(0.2) - 4 * arctan(1 / 239)
		<< "." << endl;

	system("pause");

	return 0;
}

double arctan(double x) {
	int i = 1;
	int flag = 1;
	double result = { 0.0 };
	while (abs(pow(x, i) / i) > 10E-15) {
		//result += (pow(-1, i + 1) * (1 / (2 * i + 1)));
		result = result + (flag * (1.00 / i) * pow(x, i));
		flag *= -1;
		i += 2;
	}
	return result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
