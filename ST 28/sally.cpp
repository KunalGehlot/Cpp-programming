/*
 * sally.cpp
 *
 *  Created on: 24-Jul-2017
 *      Author: Kunal
 */
# include <iostream>
#include "sally.h"

using namespace std;

sally::sally() {

}

void sally::printShiz() {
	cout << "I am a regular function" << endl;
}

void sally::printShiz2() const {
	cout << "I am the constant function" << endl;
}
