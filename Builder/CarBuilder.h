//
// Created by lazh on 9/23/20.
//

#ifndef UNTITLED_CARBUILDER_H
#define UNTITLED_CARBUILDER_H

#include "Car.h"
class CarBuilder {
private:
    int *ID;
    int *WheelsNum;
    int *doorsNum;
    int *FrameNum;
    std::string* OwnerName;
public:
    void setID(int id);
    void setWheels(int wheels);
    void setDoors(int doors);
    void setFrame(int Frame);
    void setOwner(std::string &owner);
    Car* getCar();


};


#endif //UNTITLED_CARBUILDER_H
