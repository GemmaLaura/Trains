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
using namespace std;

class Train {
	int currentStop;
	int speed;
	Line line;
public:
	Train(int c, int s, Line l) : currentStop (c), speed(s), line (l) {
		s = 0;
	}
	void go();
	void stop();
};

#endif /* TRAIN_H_ */