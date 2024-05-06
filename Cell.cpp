//
// Created by odast on 26.04.2024.
//

#include "Cell.h"

int xCoordinate;
int yCoordinate;
bool hasDot = false;
bool hasLine = false;
// Has 4 neighbours
int neighbours = [];

int getxCoordinate() {
	return xCoordinate;
}

int getyCoordinate() {
	return yCoordinate;
}

[] getCoordinates () {
	return [xCoordinate, yCoordinate];
}

bool getHasDot() {
	return hasDot;
}

bool getHasLine() {
	return hasLine;
}

[] getNeighbours() {
	return neighbours;
}

int setxCoordinate(c) {
	xCoordinate = c;
}

int setyCoordinate(c) {
	yCoordinate = c;
}

void setHasDot(bool b) {
	hasDot = b;
}

void setHasLine(bool b) {
	hasLine = b;
}
