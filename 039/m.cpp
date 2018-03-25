/*
 * m.cpp
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int main() {

	try {
		int momsAge = 30;
		int sonsAge = 34;

		if (sonsAge > momsAge) {
			throw 99;
		}
	} catch (int x) {
		cout << "Son cannot be older than mom. ERROR #" << x << endl;
	}
}
