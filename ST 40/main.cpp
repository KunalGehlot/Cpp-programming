/*
 * main.cpp
 *
 *  Created on: Jul 26, 2017
 *      Author: kunalgehlot
 */
#include <iostream>

using namespace std;

template<class bucky>

bucky addCrap(bucky a, bucky b) {
	return a + b;
}

int main() {
	double x = 7.65, y = 43.54, z;
	z = addCrap(x, y);
	cout << z << endl;
}
