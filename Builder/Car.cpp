//
// Created by lazh on 9/23/20.
//

#include "Car.h"
Car::Car(int id, int wheels, int doors, int frame, std::string &owner) {
    ID=new int(id);
    WheelsNum=new int(wheels);
    doorsNum=new int(doors);
    FrameNum=new int(frame);
    OwnerName=&owner;
}