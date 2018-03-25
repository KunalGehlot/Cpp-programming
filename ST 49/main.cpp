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

	ifstream theFile("players.txt");

	int id;
	string name;
	double money;

	while (theFile >> id >> name >> money) {
		cout << id << ", " << name << ", " << money << endl;
	}

}
