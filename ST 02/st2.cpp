/*
 * st2.cpp
 *
 *  Created on: 22-Jul-2017
 *      Author: Kunal
 */
#include <iostream>

using namespace std;

class BuckysClass {
public:
	void coolSaying() {
		cout << "preachin to the choir" << endl;
	}
};

int main() {
	BuckysClass buckysObject;
	buckysObject.coolSaying();
	return 0;
}
