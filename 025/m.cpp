/*
 * m.cpp
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */
#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main() {

	Birthday birthObj(06, 14, 1999);

	People buckyRoberts("Bucky the king", birthObj);

	buckyRoberts.printInfo();
}
