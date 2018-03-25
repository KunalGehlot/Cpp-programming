/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int main() {

	int a = 5;

	cout << &a << endl;

	int *b;
	b = &a;

	cout << b << endl;

}
