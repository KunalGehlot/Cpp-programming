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

	ofstream theFile("Players.txt");

	cout << "Enters player's ID, Name, and Money" << endl;
	cout << "Press Ctrl+Z then press Enter to quit" << endl;

	int idNo;
	string name;
	double money;

	while (cin >> idNo >> name >> money) {
		theFile << idNo << ' ' << name << ' ' << money << endl;
	}
	//theFile << "YOLO";

}
