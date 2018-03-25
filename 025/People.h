/*
 * People.h
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_

#include <string>
#include "Birthday.h"

using namespace std;

class People {

public:
	People(string x, Birthday bo);
	void printInfo();
private:
	string name;
	Birthday dateOfBirth;
};

#endif
