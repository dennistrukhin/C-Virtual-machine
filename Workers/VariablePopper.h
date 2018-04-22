//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_VARIABLEPOPPER_H
#define VIRTUALMACHINE_VARIABLEPOPPER_H


#include "../Variables.h"
#include "../Stack.h"
#include "../FileReader.h"

class VariablePopper {
    FileReader *reader;
    Variables *variables;
    Stack *stack;
public:
    explicit VariablePopper(FileReader *fr, Variables *v, Stack *s);
    void popVariable();
};


#endif //VIRTUALMACHINE_VARIABLEPOPPER_H
