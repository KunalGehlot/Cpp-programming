/*
 * p.cpp
 *
 *  Created on: 22-Jul-2017
 *      Author: Kunal
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string word = "";

	do {
		cout << "Enter a word that has at least 5 characters: " << endl;
		cin >> word;
	} while (word.length() < 5);

	char searchCh = '0';
	cout
			<< "Enter a character and the program will tell you how many times it appears in the word "
			<< word << "." << endl;
	cin >> searchCh;

	int counter = 0;

	for (int i = 0; i < (int) word.length(); i++) {

		char ch = word.at(i);

		if (searchCh == ch) {
			counter++;
		}
	}

	cout << "The number of " << searchCh << "'s in the word " << word << " is "
			<< counter << "." << endl;

}
