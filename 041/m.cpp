/*
 * m.cpp
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream buckyFile;

	buckyFile.open("tuna.txt");

	buckyFile << "I love tuna and tuna loves me!\n";
	buckyFile.close();
}
