/*
 * Sally.cpp
 *
 *  Created on: Jul 25, 2017
 *      Author: kunalgehlot
 */
#include <iostream>
#include "Sally.h"

using namespace std;

Sally::Sally() {

}

Sally::Sally(int a) {
	num = a;
}

Sally Sally::operator+(Sally aso) {

	Sally brandNew;
	brandNew.num = num + aso.num;
	return(brandNew);

}
