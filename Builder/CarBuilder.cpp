//
// Created by lazh on 9/23/20.
//

#include "CarBuilder.h"

void CarBuilder::setID(int id) {
    ID=new int(id);

}

void CarBuilder::setWheels(int wheels) {

    WheelsNum=new int(wheels);
}

void CarBuilder::setDoors(int doors) {
    doorsNum=new int(doors);
}

void CarBuilder::setFrame(int Frame) {
    FrameNum=new int(Frame);
}

void CarBuilder::setOwner(std::string &owner) {
    OwnerName=&owner;
}

Car* CarBuilder::getCar() {
    if(ID== nullptr)ID=new int(0);
    if(WheelsNum== nullptr)new int(4);
    if(doorsNum== nullptr)new int(4);
    if(FrameNum== nullptr)new int(0);
    if(OwnerName== nullptr)new std::string("");
    return  new Car(*ID,*WheelsNum,*doorsNum,*FrameNum,*OwnerName);
}
