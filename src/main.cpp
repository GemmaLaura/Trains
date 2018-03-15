
#include <iostream>
#include "Stop.h"
#include "Train.h"
#include "Line.h"
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

void start(Train* t){
	t->go();
}

//mutex a,b2,c,d,e,f,g,h,i;


int main() {
	//vector<mutex*>m;
	//m.push_back(&a);

	Stop* stop1 = new Stop("a", 2, 1);
	Stop* stop2 = new Stop("b2", 3, 2);
	Stop* stop3 = new Stop("c", 3, 1);
	Stop* stop4 = new Stop("d", 0, 1);
	Stop* stop5 = new Stop ("e", 2, 1);
	Stop* stop6 = new Stop("f", 2, 1);
	Stop* stop7 = new Stop("g", 0, 1);
	Stop* stop8 = new Stop("h", 2, 1);
	Stop* stop9 = new Stop("i", 0, 1);

	Line* line1 = new Line ();
		line1->add(stop1);
		line1->add(stop2);
		line1->add(stop3);
		line1->add(stop4);
	Line* line2 = new Line ();
		line2->add(stop5);
		line2->add(stop2);
		line2->add(stop6);
		line2->add(stop3);
		line2->add(stop7);
	Line* line3 = new Line ();
		line3->add(stop8);
		line3->add(stop2);
		line3->add(stop9);


	Train* t1 = new Train("C4", 0, 1, line1);
	Train* t2 = new Train("			  C6", 0, 1, line2);
	Train* t3 = new Train("						C8", 0, 1, line3);

	std::thread tr1(start, t1);
	std::thread tr2(start, t2);
	std::thread tr3(start, t3);
	tr1.join();
	tr2.join();
	tr3.join();


}
