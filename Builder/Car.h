//
// Created by lazh on 9/23/20.
//

#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H

#include <string>
class Car {
private:
    int *ID;
    int *WheelsNum;
    int *doorsNum;
    int *FrameNum;
    std::string* OwnerName;
public:
    Car(int id,int wheels,int doors,int frame,std::string &owner);


};


#endif //UNTITLED_CAR_H
