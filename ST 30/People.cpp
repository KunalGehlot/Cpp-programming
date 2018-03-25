/*
 * People.cpp
 *
 *  Created on: 24-Jul-2017
 *      Author: Kunal
 */
# include <iostream>
#include "People.h"
# include "Birthday.h"

using namespace std;

People::People(string x, Birthday bo) :
		name(x), dateOfBirth(bo) {

}

void People::printInfo() {
	cout << name << " was born on ";
	dateOfBirth.printDate();
}
