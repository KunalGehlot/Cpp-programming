/*
 * Sally.cpp
 *
 *  Created on: 24-Jul-2017
 *      Author: Kunal
 */
# include <iostream>
#include "Sally.h"

using namespace std;

Sally::Sally(int a, int b) :
		regVar(a), constVar(b) {

}

void Sally::print() {
	cout << "Regular var is: " << regVar << " const variable is: " << constVar
			<< endl;
}
