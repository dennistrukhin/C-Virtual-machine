//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_INTEGERMULTIPLIER_H
#define VIRTUALMACHINE_INTEGERMULTIPLIER_H


#include "../Variables.h"
#include "../FileReader.h"
#include "../Stack.h"

class IntegerMultiplier {
private:
    Stack *stack;
public:
    explicit IntegerMultiplier(Stack *s);
    void multiply();
};


#endif //VIRTUALMACHINE_INTEGERMULTIPLIER_H
