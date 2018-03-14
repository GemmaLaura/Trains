//============================================================================
// Name        : Trains.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Stop.h"
#include "Train.h"
#include "Line.h"

using namespace std;

int main() {

	Stop stop1("a", 8);
	Stop stop2("b", 5);
	Stop stop3("c", 0);
	Line line;
	line.add(stop1);
	line.add(stop2);
	line.add(stop3);

	Train t(0, 1, line);
	t.go();

}
