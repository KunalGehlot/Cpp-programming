/*
 * m.cpp
 *
 *  Created on: 18-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>
#include<string>

using namespace std;

class myClass {
public:
	myClass(string y) {
		//cout << "This is a constructor" << endl;
		setName(y);
	}
	void setName(string x) {
		name = x;
	}
	string getName() {
		return name;
	}
private:
	string name;
};

int main() {

	myClass myObject("Lucky bucky roberts");

	cout << myObject.getName() << endl;

	myClass myObject2("Sally Mcsalad");

	cout << myObject2.getName() << endl;
}
