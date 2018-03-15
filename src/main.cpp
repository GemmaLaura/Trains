
#include <iostream>
#include "Stop.h"
#include "Train.h"
#include "Line.h"
#include <thread>

using namespace std;

void start(Train t){
	t.move();
}

int main() {

	Stop stop1("a", 8, 1);
	Stop stop2("b2", 5, 2);
	Stop stop3("c", 3, 1);
	Stop stop4("d", 0, 1);
	Stop stop5 ("e", 4, 1);
	Stop stop6 ("f", 2, 1);
	Stop stop7 ("g", 0, 1);
	Stop stop8 ("h", 6, 1);
	Stop stop9 ("i", 1, 1);


	Line line1;
		line1.add(stop1);
		line1.add(stop2);
		line1.add(stop3);
		line1.add(stop4);
	Line line2;
		line2.add(stop5);
		line2.add(stop2);
		line2.add(stop6);
		line2.add(stop3);
		line2.add(stop7);
	Line line3;
			line3.add(stop8);
			line3.add(stop2);
			line3.add(stop9);


	Train t("tren c4", 0, 1, line1);
	Train t2("tren c6", 0, 1, line2);
	Train t3("tren c8", 0, 1, line3);

	std::thread tr1(start, t);
	std::thread tr2(start, t2);
	std::thread tr3(start, t3);
	tr1.join();
	tr2.join();
	tr3.join();


}
