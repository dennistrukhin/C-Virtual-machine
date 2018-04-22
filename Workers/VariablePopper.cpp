//
// Created by Dennis Trukhin on 22/04/2018.
//

#include "VariablePopper.h"

VariablePopper::VariablePopper(FileReader *fr, Variables *v, Stack *s) {
    reader = fr;
    variables = v;
    stack = s;
}

void VariablePopper::popVariable() {
    auto index = reader->getWord().asInt();
    auto var = variables->get(index);
    if (var->isInt()) {
        int value = stack->popInteger();
        variables->set(index, value);
    }
}
