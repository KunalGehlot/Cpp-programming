/*
 * People.h
 *
 *  Created on: 24-Jul-2017
 *      Author: Kunal
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_
#include<string>
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

#endif /* PEOPLE_H_ */
