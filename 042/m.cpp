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

	ofstream myObjFile; //("Beefjerky.txt");

	if (myObjFile.is_open()) {
		cout << "Ohk the file is open" << endl;
	} else {
		cout << "Zack you messed up" << endl;
	}

	myObjFile << "O I love the beef!\n";
	myObjFile.close();

}
