/*
 * m.cpp
 *
 *  Created on: 22-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>
#include <fstream>

using namespace std;

//DISPLAY THE ITEMS THEY WANT
void displayItems(int x);

//GET WHAT THEY WANT
int getWhatTheyWant();

//MAIN FUNCTION
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
		}
		whatTheyWant = getWhatTheyWant();

	}

}

//GET WHAT THEY WANT FUNCTION
int getWhatTheyWant() {
	int choice;

	cout << "\n1 - Just plain items" << endl;
	cout << "2 - Helpful items" << endl;
	cout << "3 - Harmful items" << endl;
	cout << "4 - quit program\n" << endl;

	cin >> choice;

	return choice;
}

//DISPLAY ITEMS FUNCTION
void displayItems(int x) {

	ifstream objFile("object.txt");

	string name;
	double power;

	if (x == 1) {
		while (objFile >> name >> power) {
			if (power == 0) {
				cout << name << ' ' << power << endl;
			}
		}
	} else if (x == 2) {
		while (objFile >> name >> power) {
			if (power > 0) {
				cout << name << ' ' << power << endl;
			}
		}
	} else if (x == 3) {
		while (objFile >> name >> power) {
			if (power < 0) {
				cout << name << ' ' << power << endl;
			}
		}
	}

}
