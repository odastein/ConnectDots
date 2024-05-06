//
// Created by odast on 26.04.2024.
//

#include "Cell.h"
#include <list>

int xCoordinate;
int yCoordinate;
bool hasDot = false;
bool hasLine = false;
// Has 4 neighbours
std::list<Cell> neighbours;

int getxCoordinate() {
	return xCoordinate;
}

int getyCoordinate() {
	return yCoordinate;
}

std::list<int> getCoordinates () {
	return {xCoordinate, yCoordinate};
}

bool getHasDot() {
	return hasDot;
}

bool getHasLine() {
	return hasLine;
}

std::list<Cell> getNeighbours() {
	return neighbours;
}

int setxCoordinate(int c) {
	xCoordinate = c;
}

int setyCoordinate(int c) {
	yCoordinate = c;
}

void setHasDot(bool b) {
	hasDot = b;
}

void setHasLine(bool b) {
	hasLine = b;
}

void addNeighbour(Cell cell) {
	neighbours.push_back(cell);
}
