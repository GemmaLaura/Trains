/*
 * Stop.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef STOP_H_
#define STOP_H_
#include <iostream>
#include <mutex>
#include "Semaphore.cpp"


using namespace std;

class Stop {
	string nameStop;
	int distanceToNext;
	int platform;


public:
	mutex m;
	Semaphore s;
	Stop(string n, int d=0, int p=1) : nameStop (n), distanceToNext (d), platform (p){
		for (int i = 0; i < p; ++i) {
			s.notify();
		}
	}

	const int& getDistanceToNext() const;
	const string& getNameStop() const;
	//mutex getM() const;

};

#endif /* STOP_H_ */
