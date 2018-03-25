/*
 * main.cpp
 *
 *  Created on: Jul 26, 2017
 *      Author: kunalgehlot
 */
# include <iostream>
# include <fstream>

using namespace std;

int main() {

	ofstream buckyFile;
	buckyFile.open("tuna.txt");

	buckyFile << "I love tuna and ham!\n";
	buckyFile.close();

}
