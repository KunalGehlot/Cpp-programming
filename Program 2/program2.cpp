/*
 * program2.cpp
 *
 *  Created on: 17-Jul-2017
 *      Author: Kunal
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
	string name = "";
	int age = 0;

	cout << "Enter your name: \n";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Your name is: " << name << ".\nYour age is: " << age << ".";

	return 0;
}
