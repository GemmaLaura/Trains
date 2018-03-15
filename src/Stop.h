/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef STOP_H_
#define STOP_H_
#include <iostream>
#include "Semaphore.cpp"

using namespace std;

class Stop {
	string nameStop;
	int distanceToNext;
	int platform;
	Semaphore s;
public:
	Stop(string n, int d=0, int platform) : nameStop (n), distanceToNext (d), platform (platform){
		for (int i = 0; i < platform; ++i) {
			s.notify();
		}
	}

	const int& getDistanceToNext() const;
	const string& getNameStop() const;

};

#endif /* STOP_H_ */
