//
// Created by lazh on 9/23/20.
//

#include "IntegerClass.h"
IntegerClass::IntegerClass(int data) {
    info=new int(data);
}
std::string IntegerClass::getData() {
    return std::to_string(*info);
}