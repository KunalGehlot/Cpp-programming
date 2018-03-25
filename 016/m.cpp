/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

void printNumber(int x);		// THIS IS CALLED FUNCTION OVERLOADING OF TAKING IN ANY DATA TYPE IN ONE FUNCTION
void printNumber(float y); 		// THIS IS THE OVERLOADING FUNCITON

int main() {

	int a = 54;
	float b = 67.45345;

	printNumber(a);
	printNumber(b);
}

void printNumber(int x) {

	cout << "I am printing an integer " << x << endl;
}

void printNumber(float y) {

	cout << "I am printing a float " << y << endl;
}
