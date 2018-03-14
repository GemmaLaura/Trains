/*
 * Train.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef TRAIN_H_
#define TRAIN_H_
#include <iostream>
#include "Line.h"
#include <thread>
#include <chrono>
using namespace std;

class Train {
	string name;
	int currentStop;
	int speed;
	Line line;
public:
	Train(string n, int c, int s, Line l) : name (n), currentStop (c), speed(s), line (l) {
		s = 0;
	}

	void go();
	void stop();
	//void move ();


};

#endif /* TRAIN_H_ */
