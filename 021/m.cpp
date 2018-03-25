/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>
#include "Sally.h"

using namespace std;

int main() {

	Sally myObject;
	Sally *myPointer = &myObject; //ACCESSING VIA POINTER OR MEMORY LOCATION

	myObject.printCrap();
	myPointer->printCrap();  // -> IS THE ARROW MEMBER SELECTION OPERATOR TO "POINT" TO A POINTER

}
