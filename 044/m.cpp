/*
 * m.cpp
 *
 *  Created on: 22-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>
#include <fstream>

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
