//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_DISPLAYER_H
#define VIRTUALMACHINE_DISPLAYER_H


#include "../FileReader.h"
#include "../Variables.h"

class VariableDisplayer {
private:
    FileReader *reader;
    Variables *variables;
public:
    explicit VariableDisplayer(FileReader *fr, Variables *v);
    void display();
};


#endif //VIRTUALMACHINE_DISPLAYER_H
