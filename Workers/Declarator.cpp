//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <iostream>
#include "Declarator.h"
#include "../Variables.h"

Declarator::Declarator(FileReader *fr, Variables * v) {
    reader = fr;
    variables = v;
}

void Declarator::declare() {
    auto type = reader->getWord();
    auto index = reader->getWord().asInt();
#ifdef DEBUG
    auto * t = const_cast<char *>("UND");
#endif
    if (type.is((unsigned char *) "\0INT")) {
        variables->add(index, new Variable((int)0));
#ifdef DEBUG
        t = const_cast<char *>("INT");
#endif
    } else if (type.is((unsigned char *) "\0FLT")) {
        variables->add(index, new Variable((float)0));
#ifdef DEBUG
        t = const_cast<char *>("FLT");
#endif
    } else if (type.is((unsigned char *) "\0STR")) {
        variables->add(index, new Variable((unsigned char *) ""));
#ifdef DEBUG
        t = const_cast<char *>("STR");
#endif
    }
#ifdef DEBUG
    std::cout << "Declaring variable with type " << t << " and index " << index << std::endl;
#endif
}
