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
	int distanceToNext;
public:
	Stop(string n, int d=0) : nameStop (n), distanceToNext (d){}

	const int& getDistanceToNext() const;
	const string& getNameStop() const;

};

#endif /* STOP_H_ */
