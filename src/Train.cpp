/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"
#include <unistd.h>


void Train::go(){
	int distance=0;
	int time=0;

	while(line->getStop(currentStop)->getDistanceToNext() != 0 ){
		ostringstream text;
		text<< name << " esperando: " << line->getStop(currentStop)->getNameStop() << '\n';
		cout << text.str();

		stay(currentStop);
		distance =line->getStop(currentStop)->getDistanceToNext();
		time = distance/speed;

				for (int i = 0; i < time; ++i) {
						ostringstream text5;
						text5<< name << " .\n"<< endl;
						cout << text5.str();
						sleep(1);
				}
	currentStop++;
	}
	ostringstream text3;
	text3 << name << " Última parada. Final de Trayecto"<< '\n';
	cout << text3.str();
}

void Train::stay(int currentStop){
	line->getStop(currentStop)->s.wait();
	//lock_guard<mutex> guard(line->getStop(currentStop)->m);

			ostringstream text2;
			text2 << name << " parado: " << line->getStop(currentStop)->getNameStop() << '\n';
			cout << text2.str();
			sleep(3);
			line->getStop(currentStop)->s.notify();

}




