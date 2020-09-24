//
// Created by lazh on 9/23/20.
//

#ifndef UNTITLED_CONTROLLER_H
#define UNTITLED_CONTROLLER_H


class Controller {
private:
    Controller();
    static Controller* instance;
public:
    Controller* getInstance();

};


#endif //UNTITLED_CONTROLLER_H
