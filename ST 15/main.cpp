/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
# include <iostream>

using namespace std;

int factorialFinder(int x) {
	if (x == 1) {
		return 1;
	} else {
		return x * factorialFinder(x - 1);
	}
}

int main() {
	cout << factorialFinder(255) << endl;
}
