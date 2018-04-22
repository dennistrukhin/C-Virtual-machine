//
// Created by Dennis Trukhin on 22/04/2018.
//

#include "IntegerPusher.h"

IntegerPusher::IntegerPusher(FileReader *fr, Variables *v, Stack *s) {
    reader = fr;
    variables = v;
    stack = s;
}

void IntegerPusher::pushInteger() {
    auto v = reader->getWord().asInt();
    stack->push(v);
    stack->dump();
}
