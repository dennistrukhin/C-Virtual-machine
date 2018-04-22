//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_INTEGERPUSHER_H
#define VIRTUALMACHINE_INTEGERPUSHER_H


#include "../Variables.h"
#include "../FileReader.h"
#include "../Stack.h"

class IntegerPusher {
    FileReader *reader;
    Variables *variables;
    Stack *stack;
public:
    explicit IntegerPusher(FileReader *fr, Variables *v, Stack *s);
    void pushInteger();
};


#endif //VIRTUALMACHINE_INTEGERPUSHER_H
