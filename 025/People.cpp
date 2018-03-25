/*
 * People.cpp
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */
#include "Birthday.h"
#include "People.h"
#include <iostream>
#include <string>

using namespace std;

People::People(string x, Birthday bo) :
		name(x), dateOfBirth(bo) {

}

void People::printInfo() {
	cout << name << " was born on: ";
	dateOfBirth.printDate();
}
