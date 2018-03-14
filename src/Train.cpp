/*
 * Train.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Train.h"


void Train::go(){
	int distance=0;
	int time=0;
	while(line.getStop(currentStop).getDistanceToNext() != 0 ){
		cout<< "Estoy en la parada: "<< line.getStop(time).getNameStop() << endl;
		time ++;
		distance = speed*time;

		std::this_thread::sleep_for(std::chrono::seconds(3));
	}
	currentStop++;

}

void Train::stop(){
	speed = 0;

}

void Train::move () {
	for (int i = 0; i < line.getStop(); ++i) {
		if (i!=line.getStop()-1){
			go();
		}else {
			cout<<"Parada: "<< line.getStop(currentStop).getNameStop()<< endl;
			stop();
		}

	}

}

