/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
# include <iostream>

using namespace std;

int main() {

	int bucky[5];
	int *bp0 = &bucky[0];
	int *bp1 = &bucky[1];
	int *bp2 = &bucky[2];
	int *bp3 = &bucky[3];

	cout << "BP0 is at " << bp0 << endl;
	cout << "BP1 is at " << bp1 << endl;
	cout << "BP2 is at " << bp2 << endl;
	cout << "BP3 is at " << bp3 << endl;

	bp0 += 2;
	cout << "BP0 is now at " << bp0 << endl;
}
