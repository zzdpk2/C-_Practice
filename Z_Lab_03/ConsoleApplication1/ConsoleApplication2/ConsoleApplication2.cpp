// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

const float PI = 3.1416;

int main()
{
	int iType;
	float radius, a, b, area;

	cout << "The types of shapes are (1-Circle/2-Rectangle/3-Square)" << endl;
	cin >> iType;
	switch (iType){

	case 1:
		cout << "Please enter the radius: " << endl;
		cin >> radius;
		cout << "The area is " << PI * radius * radius << endl;
		break;

	case 2:
		cout << "Please enter the length and width :" << endl;
		cin >> a >> b;
		cout << "The area is " << a * b << endl;
		break;

	case 3:
		cout << "Please enter the length of side: " << endl;
		cin >> a;
		cout << "The area is " << a * a << endl;
		break;

	default:
		break;
	}


	return 0;
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
