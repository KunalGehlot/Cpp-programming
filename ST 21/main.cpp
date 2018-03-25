/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
#include <iostream>

using namespace std;

int main() {
	int bertha[2][3] = { { 2, 3, 4 }, { 8, 9, 10 } };

	for (int row = 0; row < 2; row++) {
		for (int column = 0; column < 3; column++) {
			cout << bertha[row][column] << " ";
		}
	}
	cout << endl;
}
