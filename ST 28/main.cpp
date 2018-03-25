/*
 * main.cpp
 *
 *  Created on: 24-Jul-2017
 *      Author: Kunal
 */
# include <iostream>
# include "sally.h"

using namespace std;

int main() {

	sally salObj;
	salObj.printShiz();

	const sally constObj;
	constObj.printShiz2();
}
