/*
 * m.cpp
 *
 *  Created on: 21-Mar-2018
 *      Author: Kunal Gehlot
 */

#include <iostream>

using namespace std;

class Enemy {
protected:
	int attackPower;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};

class Ninja: public Enemy {
public:
	void attack() {
		cout << "I'm a Ninja, *Ninja Chop!!* -" << attackPower << endl;
	}
};

class Monster: public Enemy {
public:
	void attack() {
		cout << "Monster must eat you! -" << attackPower << endl;
	}
};

int main() {

	Ninja n;
	Monster m;

	Enemy *enemy1 = &n;			//BECAUSE NINJA IS OF TYPE ENEMY, THIS IS VALID
	Enemy *enemy2 = &m;			//ANYTHING THAT AN ENEMY CAN DO, MONSTER CAN DO

	enemy1->setAttackPower(29);		//NINJA IS JUST MORE SPECIFIC TYPE OF ENEMY
	enemy2->setAttackPower(99);		//EVERY ENEMY HAS SETATTACKPOWER

	n.attack();				//CANT USE enemy1 BECAUSE IT'S TYPE ENEMY
	m.attack();				//VIRTUAL MEMBERS MAKE THIS EVEN EASIER

}
