/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int calage(int currentyr, int dob);

int main() {

	int yr = 2018;
	int dob;
	int result;

	cout << "Age calculator initiating" << endl;
	cout << "Enter DOB" << endl;
	cin >> dob;

	result = calage(yr, dob);

	cout << "Age is: " << result << endl;
}

int calage(int currentyear, int dob) {

	int val;
	val = currentyear - dob;

	return val;

}
