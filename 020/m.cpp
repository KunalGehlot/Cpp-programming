/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main() {
	int betty = 13;
	int sandy = 13;

	cout << "Betty: " << betty << endl;
	cout << "Sandy: " << sandy << endl;

	passByValue(betty);
	passByReference(&sandy);

	cout << "Betty: " << betty << endl;
	cout << "Sandy: " << sandy << endl;

}

void passByValue(int x) {
	x = 99;
}

void passByReference(int *x) {
	*x = 66;
}
