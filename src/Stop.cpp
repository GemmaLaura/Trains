/*
 * Stop.cpp
 *
 *  Created on: 13/03/2018
 *      Author: usuario
 */

#include "Stop.h"

const int& Stop::getDistanceToNext() const {
	return distanceToNext;
}

const string& Stop::getNameStop() const {
	return nameStop;
}

//mutex Stop::getM() const {
//	return m;
//}
