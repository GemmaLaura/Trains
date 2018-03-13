/*
 * Line.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Line.h"

void Line::add(Stop s) {
	stops.push_back(s);
}

Stop Line::get(int index){
	return stops[index];
}

Stop Line::find(string name){
	for (int i = 0; i < stops.size(); i++) {
		if (stops[i].getNameStop() == name) {
			return stops[i];
		}

	}
}
