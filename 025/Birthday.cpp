/*
 * Birthday.cpp
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */

#include "Birthday.h"
#include <iostream>

using namespace std;

Birthday::Birthday(int m, int d, int y) {

	month = m;
	day = d;
	year = y;

}

void Birthday::printDate() {

	cout << month << "/" << day << "/" << year << endl;

}
