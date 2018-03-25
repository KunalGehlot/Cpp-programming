/*
 * main.cpp
 *
 *  Created on: Jul 26, 2017
 *      Author: kunalgehlot
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Get what they want function
int getWhatTheyWant();

//Main function
int main() {

	int whatTheyWant;

	whatTheyWant = getWhatTheyWant();

	while(whatTheyWant != 4){


		whatTheyWant = getWhatTheyWant();
	}

}

//Get what they want function
int getWhatTheyWant() {
	int choice;

	cout << "1 - Just plain items" << endl;
	cout << "2 - Helpful items" << endl;
	cout << "3 - Harmful items" << endl;
	cout << "4 - Quit program" << endl;

	cin >> choice;
	return choice;
}

