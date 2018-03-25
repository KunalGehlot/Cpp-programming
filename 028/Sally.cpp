/*
 * Sally.cpp
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */

#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally() {

}

Sally::Sally(int a) {
	num = a;
}

Sally Sally::operator+(Sally aso) {
	Sally brandNew;
	brandNew.num = num + aso.num;
	return (brandNew);

}
