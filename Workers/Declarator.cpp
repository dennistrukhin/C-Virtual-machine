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
    auto * t = const_cast<char *>("UND");
    if (type.is((unsigned char *) "\0INT")) {
        variables->add(index, new Variable((int)0));
        t = const_cast<char *>("INT");
    } else if (type.is((unsigned char *) "\0FLT")) {
        variables->add(index, new Variable((float)0));
        t = const_cast<char *>("FLT");
    } else if (type.is((unsigned char *) "\0STR")) {
        variables->add(index, new Variable((unsigned char *) ""));
        t = const_cast<char *>("STR");
    }
    std::cout << "Declaring new variable: " << index << " (" << t << ")" << std::endl;
}
