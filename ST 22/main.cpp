/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
#include <iostream>

using namespace std;

int main() {

	int fish = 5;
	cout << &fish << endl;

	int *fishPointer;
	fishPointer = &fish;

	cout << fishPointer << endl;
}
