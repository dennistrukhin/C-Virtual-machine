//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_VARIABLEPUSHER_H
#define VIRTUALMACHINE_VARIABLEPUSHER_H


#include "../Variables.h"
#include "../Stack.h"
#include "../FileReader.h"

class VariablePusher {
    FileReader *reader;
    Variables *variables;
    Stack *stack;
public:
    explicit VariablePusher(FileReader *fr, Variables *v, Stack *s);
    void pushVariable();
};


#endif //VIRTUALMACHINE_VARIABLEPUSHER_H
