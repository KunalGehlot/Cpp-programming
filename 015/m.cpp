/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int tuna = 69;

int main() {

	int tuna = 20;

	cout << ::tuna << endl; //USE THE GLOBAL VARIABLE INSTEAD OF LOCAL
	cout << tuna << endl;
}
