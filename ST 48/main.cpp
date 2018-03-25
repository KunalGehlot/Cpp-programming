/*
 * main.cpp
 *
 *  Created on: Jul 26, 2017
 *      Author: kunalgehlot
 */
# include <iostream>
# include <fstream>
# include <string>

using namespace std;

int main() {

	ofstream theFile("players.txt");

	cout << "Enter player's ID, Name and money" << endl;
	cout << "Press Command+z to quit.\n" << endl;

	int idNumber;
	string name;
	double money;

	while (cin >> idNumber >> name >> money) {

		theFile << idNumber << ' ' << name << ' ' << money << endl;

	}

}
