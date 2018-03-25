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

	myClass myObject;
	string x;

	cout << "Enter name" << endl;
	cin >> x;
	myObject.setName(x);
	cout << myObject.getName() << endl;
}
