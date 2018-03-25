/*
 * main.cpp
 *
 *  Created on: Jul 26, 2017
 *      Author: kunalgehlot
 */
#include <iostream>
#include <string>

using namespace std;

int main() {

	/*

	 string s1("OMG I THINK I AM EFG!!");
	 cout << s1.substr(17, 7) << endl;

	 -------------------------------------------

	 string one("apples ");
	 string two("beans ");

	 cout << one << two << endl;
	 one.swap(two);
	 cout << one << two << endl;

	 --------------------------------------------

	 */

	string s1("Ham is spam oh yes i am");

	cout << s1.find("am") << endl;
	cout << s1.rfind("am") << endl;
}
