//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_VALUEMOVER_H
#define VIRTUALMACHINE_VALUEMOVER_H


#include "../FileReader.h"
#include "../Variables.h"

class NumberLoader {
private:
    FileReader *reader;
    Variables *variables;
public:
    explicit NumberLoader(FileReader *fr, Variables *v);
    void loadNumber();
};


#endif //VIRTUALMACHINE_VALUEMOVER_H
