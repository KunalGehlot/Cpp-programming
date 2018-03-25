/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
# include <iostream>

using namespace std;

int main() {
	int bucky[9];

	cout << "Element  -  Value" << endl;

	for (int x = 0; x < 9; x++) {
		bucky[x] = 99;

		cout << x << "    -----    " << bucky[x] << endl;
	}
}
