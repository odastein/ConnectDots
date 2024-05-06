//
// Created by odast on 22.04.2024.
//

#include <iostream>
#include <string.h>
#include <list>

list<Cell> cells = new list<Cell>;

void makeBoard(int size){
/*
for example 4x4:
---------
| | | | |
---------
| | | | |
---------
| | | | |
---------
| | | | |
---------
*/

	for(int i, i < size, i++) {
    	for (int j, j < size, j++) {
       	new Cell cell;
			cell.setxCoordinate(i);
			cell.setyCoordinate(j);'
			cells.push_back(cell);
    	}
	}

}

int main() {

}
