//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_ADDER_H
#define VIRTUALMACHINE_ADDER_H

#include "../Variables.h"
#include "../FileReader.h"
#include "../Stack.h"

class IntegerAdder {
private:
    Stack *stack;
public:
    explicit IntegerAdder(Stack *s);
    void add();
};


#endif //VIRTUALMACHINE_ADDER_H
