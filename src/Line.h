/*
 * Line.h
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#ifndef LINE_H_
#define LINE_H_
#include <iostream>
#include <vector>
using namespace std;
#include "Stop.h"


class Line {
	vector<Stop>stops;
public:
	Line();
	void add(Stop s);
	Stop get(int i);
	Stop find(string name);

};

#endif /* LINE_H_ */
