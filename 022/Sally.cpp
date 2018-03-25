/*
 * Sally.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally() {

	cout << "I'm a constructor" << endl;
}

Sally::~Sally() { // NEVER HAS RETURN VALUE, PARAMETERS AND NO OVERLOADING IT!!!!!!

	cout << "I'm the de-constructinator" << endl;
}
