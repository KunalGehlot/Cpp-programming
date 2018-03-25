/*
 * main.cpp
 *
 *  Created on: 23-Jul-2017
 *      Author: Kunal
 */
# include <iostream>
#include "Sally.h"

using namespace std;

int main() {

	Sally sallyObject;
	Sally *sallyPointer = &sallyObject;

	sallyObject.printCrap();
	sallyPointer->printCrap();
}
