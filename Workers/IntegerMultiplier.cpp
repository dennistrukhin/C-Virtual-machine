//
// Created by Dennis Trukhin on 22/04/2018.
//

#include "IntegerMultiplier.h"

IntegerMultiplier::IntegerMultiplier(Stack *s) {
    stack = s;
}

void IntegerMultiplier::multiply() {
    int v1 = stack->popInteger();
    int v2 = stack->popInteger();
    int result = v1 * v2;
    stack->push(result);
    stack->dump();
}
