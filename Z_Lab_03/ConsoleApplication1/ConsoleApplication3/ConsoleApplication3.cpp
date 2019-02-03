// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

struct MyTimeStruct{

	unsigned int year;
	unsigned int month;
	unsigned int day;

	unsigned int hour;
	unsigned int minute;
	unsigned int second;

};

int main(){

	MyTimeStruct myTime = { 2015, 3, 16, 12, 0, 0 };
	
	cout << "Please input Year: " << endl;
	cin >> myTime.year;

	cout << "Please input Month: " << endl;
	cin >> myTime.month;

	cout << "Please input Day: " << endl;
	cin >> myTime.day;

	cout << "Please input Hour: " << endl;
	cin >> myTime.hour;

	cout << "Please input Minute: " << endl;
	cin >> myTime.minute;

	cout << "Please input Second: " << endl;
	cin >> myTime.second;

	cout << "The time is " << myTime.year << " year "
		<< myTime.month << " month "
		<< myTime.day << " day "
		<< myTime.hour << " hours "
		<< myTime.second << " minutes "
		<< endl;

	system("pause");

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
