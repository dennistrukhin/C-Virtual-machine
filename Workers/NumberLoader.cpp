//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <iostream>
#include "NumberLoader.h"

NumberLoader::NumberLoader(FileReader *fr, Variables *v) {
    reader = fr;
    variables = v;
}

void NumberLoader::loadNumber() {
    auto dest = reader->getWord().asInt();
    auto var = variables->get(dest);
    if (var->isInt()) {
        auto value = reader->getWord().asInt();
        variables->set(dest, value);
    } else if (var->isFloat()) {
        auto value = reader->getWord().asFloat();
        variables->set(dest, value);
    }
}
