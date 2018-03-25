/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int fact(int x) {

	if (x == 1) {
		return 1;
	} else {
		return x * fact(x - 1);
	}

}

int main() {

	cout << fact(5) << endl;

}
