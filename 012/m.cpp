/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

int main() {

	int age;
	int ageTotal = 0;
	int numberOfPeopleEntered = 0;

	cout << "Enter first person's age or -1 to quit" << endl;
	cin >> age;

	while (age > 0) {

		ageTotal += age;
		numberOfPeopleEntered++;

		cout << "Enter next person's age or -1 to quit" << endl;
		cin >> age;

	}

	cout << "Age total of " << numberOfPeopleEntered << " people is: "
			<< ageTotal << endl;
	cout << "Average age is: " << ageTotal / numberOfPeopleEntered << endl;

}
