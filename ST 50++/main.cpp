/*
 * main.cpp
 *
 *  Created on: Jul 26, 2017
 *      Author: kunalgehlot
 */
#include <iostream>
#include <fstream>

using namespace std;

int getWhatTheyWant();
void displayItems(int x);

//Main function
int main() {

	int whatTheyWant;

	whatTheyWant = getWhatTheyWant();

	while (whatTheyWant != 4) {

		switch (whatTheyWant) {

		case 1:
			displayItems(1);
			break;
		case 2:
			displayItems(2);
			break;
		case 3:
			displayItems(3);
			break;

		}
		whatTheyWant = getWhatTheyWant();

	}

}

//Get what they want function
int getWhatTheyWant() {
	int choice;

	cout << "\n1 - Just plain items" << endl;
	cout << "2 - Helpful items" << endl;
	cout << "3 - Harmful items" << endl;
	cout << "4 - Quit program\n" << endl;

	cin >> choice;
	return choice;
}

//Items to display
void displayItems(int x) {

	ifstream objectFile("objects.txt");
	string name;
	double power;

	if (x == 1) {
		while (objectFile >> name >> power) {
			if (power == 0) {
				cout << name << ' ' << power << endl;
			}

		}

	}
	if (x == 2) {
		while (objectFile >> name >> power) {
			if (power > 0) {
				cout << name << ' ' << power << endl;
			}

		}

	}
	if (x == 3) {
		while (objectFile >> name >> power) {
			if (power < 0) {
				cout << name << ' ' << power << endl;
			}

		}

	}

}
