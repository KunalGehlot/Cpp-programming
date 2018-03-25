/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {

	srand(time(0));

	for (int i = 0; i < 25; i++) {

		cout << rand() % 6 + 1 << endl;
	}

}
