/*
 * project3.cpp
 *
 *  Created on: 17-Jul-2017
 *      Author: Kunal
 */
#include <iostream>
#include <string>

using namespace std;

int main() {

	string movie = "";
	cout << "What is the name of the movie: \n";
	//cin >> movie; Only works for first word of the title;
	getline(cin, movie);

	int metascore = 0;
	cout << "What is the Metascore rating for " << movie << "?\n";
	cin >> metascore;

	int tomatometer = 0;
	cout << "What is the Tomatometer rating for " << movie << "?\n";
	cin >> tomatometer;

	double avg = (double)(metascore + tomatometer) / 2.0;

	double rescaledScore = avg / 10;

	cout << "Our calculated average on a 10 point scale for " << movie << " is "
			<< rescaledScore << ".";

	return 0;
}
