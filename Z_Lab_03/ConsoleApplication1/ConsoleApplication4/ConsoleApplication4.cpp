// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

double power(double base, int times);

int main(){

	double base = { 0.0 };
	int times = { 0 };

	cout << "Please input base: " << endl;
	cin >> base;
	cout << "Please input times: " << endl;
	cin >> times;

	cout << "The result is " << power(base, times) << "." << endl;

	system("pause");

	return 0;
}

double power(double base, int times) {
	double product = 1.0;
	while (times > 0) {
		product *= base;
		times--;
	}
	return product;
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
