//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_VALUEMOVER_H
#define VIRTUALMACHINE_VALUEMOVER_H


#include "../FileReader.h"
#include "../Variables.h"

class ValueMover {
private:
    FileReader *reader;
    Variables *variables;
public:
    explicit ValueMover(FileReader *fr, Variables *v);
    void moveValue();
};


#endif //VIRTUALMACHINE_VALUEMOVER_H
