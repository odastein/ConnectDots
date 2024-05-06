//
// Created by odast on 26.04.2024.
//

#ifndef CELL_H
#define CELL_H



class Cell {
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

    void setHasDot(bool b) {}

    void setHasLine(bool b) {}

};



#endif //CELL_H
