/*
 * Birthday.h
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */

#ifndef BIRTHDAY_H_
#define BIRTHDAY_H_

class Birthday {

public:
	Birthday(int m, int d, int y);
	void printDate();
private:
	int month;
	int day;
	int year;

};

#endif
