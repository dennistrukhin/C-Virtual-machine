//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <iostream>
#include "VariableDisplayer.h"

VariableDisplayer::VariableDisplayer(FileReader *fr, Variables *v) {
    reader = fr;
    variables = v;
}

void VariableDisplayer::display() {
    auto index = reader->getWord().asInt();
    auto var = variables->get(index);
    std::cout << "=> ";
    if (var->isInt()) {
        auto value = var->getIntValue();
        std::cout << value;
    } else if (var->isFloat()) {
        auto value = var->getFloatValue();
        std::cout << value;
    }
    std::cout << std::endl;
}
