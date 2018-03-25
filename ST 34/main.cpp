/*
 * main.cpp
 *
 *  Created on: Jul 25, 2017
 *      Author: kunalgehlot
 */
#include <iostream>
#include "Sally.h"

using namespace std;

int main() {
	Sally a(34);
	Sally b(21);
	Sally c;

	c = a + b;
	cout << c.num << endl;
}
`
