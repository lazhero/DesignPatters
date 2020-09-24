//
// Created by lazh on 9/23/20.
//

#ifndef UNTITLED_INTEGERCLASS_H
#define UNTITLED_INTEGERCLASS_H
#include "File.h"

class IntegerClass:File {
private:
    int *info;
public:
    IntegerClass(int data);
    std::string getData()override;

};


#endif //UNTITLED_INTEGERCLASS_H
