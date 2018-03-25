/*
 * Hannah.cpp
 *
 *  Created on: Jul 25, 2017
 *      Author: kunalgehlot
 */
#include <iostream>
#include "Hannah.h"

using namespace std;

Hannah::Hannah(int num) :
	h(num) {

}

void Hannah::printCrap() {

	cout << "h=" << h << endl;
	cout << "this->h=" << this->h << endl;
	cout << "(*this).h=" << (*this).h << endl;

}
