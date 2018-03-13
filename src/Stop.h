/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef STOP_H_
#define STOP_H_
#include <iostream>

using namespace std;

class Stop {
	string nameStop;
	string distanceToNext;
public:
	Stop(string n, string d) : nameStop (n), distanceToNext (d){}
};

#endif /* STOP_H_ */
