/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"
#include <unistd.h>


void Train::stay(){
	int distance=0;
	int time=0;

	while(line.getStop(currentStop).getDistanceToNext() != 0 ){
		cout<< name << " Parada: "<< line.getStop(currentStop).getNameStop() << endl;
		distance=line.getStop(currentStop).getDistanceToNext();

		time = distance/speed;

		for (int i = 0; i < time; ++i) {
			cout<< " .\n"<< endl;
			//std::this_thread::sleep_for(std::chrono::seconds(1));
			sleep(4);
		}
		currentStop++;
	}

	cout<< "Última parada. Final de Trayecto"<< endl;
}

void Train::stop(){
	speed = 0;

}

void Train::move () {
	line.getStop(currentStop).s.wait();
	stay();
	line.getStop(currentStop).s.notify();

}



