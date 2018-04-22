//
// Created by Dennis Trukhin on 22/04/2018.
//

#include "VariablePusher.h"

VariablePusher::VariablePusher(FileReader *fr, Variables *v, Stack *s) {
    reader = fr;
    variables = v;
    stack = s;
}

void VariablePusher::pushVariable() {
    auto index = reader->getWord().asInt();
    auto var = variables->get(index);
    if (var->isInt()) {
        stack->push(var->getIntValue());
    }
    stack->dump();
}
