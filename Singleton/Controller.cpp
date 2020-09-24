//
// Created by lazh on 9/23/20.
//

#include "Controller.h"

Controller::Controller() {

}

Controller *Controller::getInstance() {
    if(instance== nullptr){
        instance=new Controller();
    }
    return instance;
}
