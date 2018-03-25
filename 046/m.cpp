/*
 * m.cpp
 *
 *  Created on: 22-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1("hampster ");
	string s2;
	string s3;

	s2 = s1;
	s3.assign(s1);

	cout << s1 << s2 << s3 << endl;
}
