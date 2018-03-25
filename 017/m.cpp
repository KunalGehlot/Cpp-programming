/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int j = 0;

int recurse() {
	cout << "fuck";
	recurse();
}

int main() {

	recurse();
}

/*
 *  NOT USABLE AT ALL ............. AT ALL LITERALLY
 */
