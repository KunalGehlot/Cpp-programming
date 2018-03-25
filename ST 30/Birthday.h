/*
 * Birthday.h
 *
 *  Created on: 24-Jul-2017
 *      Author: Kunal
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

#endif /* BIRTHDAY_H_ */
