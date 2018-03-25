/*
 * Sally.cpp
 *
 *  Created on: 19-Mar-2018
 *      Author: Kunal Gehlot
 */

#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally(int a, int b) :
		regVar(a), constVar(b) {

}

void Sally::print() {

	cout << "Regular value is: " << regVar << " and constant variable is: "
			<< constVar << endl;
}
