/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
# include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main() {
	int betty = 13;
	int sandy = 13;

	passByValue(betty);
	passByReference(&sandy);

	cout << "Petty is now " << betty << endl;
	cout << "Sandy is now " << sandy << endl;
}

void passByValue(int x) {
	x = 99;
}

void passByReference(int *x) {
	*x = 66;
}
