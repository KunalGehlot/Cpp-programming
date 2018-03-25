/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
# include <iostream>
# include <cmath>

using namespace std;

int main() {
	int age = 23;
	int money = 50;

	if (age > 21 || money > 500) {
		cout << "You are allowed in";
	} else {
		cout << "Back off";
	}
}
