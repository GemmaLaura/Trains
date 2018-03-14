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
#include <thread>

using namespace std;

void start(Train t){
	t.go();
}

int main() {

	Stop stop1("a", 8);
	Stop stop2("b", 5);
	Stop stop3("c", 0);
	Line line;
	line.add(stop1);
	line.add(stop2);
	line.add(stop3);

	Train t("tren c4", 0, 1, line);
	Train t2("tren c6", 0, 1, line);

	std::thread tr1(start, t);
	std::thread tr2(start, t2);
	tr1.join();
	tr2.join();


}
