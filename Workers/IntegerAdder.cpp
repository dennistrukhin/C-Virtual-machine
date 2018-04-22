//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <iostream>
#include "IntegerAdder.h"

IntegerAdder::IntegerAdder(Stack *s) {
    stack = s;
}

void IntegerAdder::add() {
    int v1 = stack->popInteger();
    int v2 = stack->popInteger();
    int result = v1 + v2;
    stack->push(result);
    stack->dump();
}
