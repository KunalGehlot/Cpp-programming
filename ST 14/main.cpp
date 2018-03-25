/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
#include<iostream>

using namespace std;

void printNumber(int x) {
	cout << "Here's your number " << x << endl;
}

void printNumber(float x) {
	cout << "Here's your number " << x << endl;
}

int main() {
	int a = 54;
	float b = 32.4869;

	printNumber(a);
	printNumber(b);
}

