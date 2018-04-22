//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <iostream>
#include "ValueMover.h"

ValueMover::ValueMover(FileReader *fr, Variables *v) {
    reader = fr;
    variables = v;
}

void ValueMover::moveValue() {
    auto dest = reader->getWord().asInt();
    auto var = variables->get(dest);
    if (var->isInt()) {
        auto value = reader->getWord().asInt();
        variables->set(dest, value);
        std::cout << "Moving " << value << " into variable " << dest << std::endl;
    } else if (var->isFloat()) {
        auto value = reader->getWord().asFloat();
        variables->set(dest, value);
        std::cout << "Moving " << value << " into variable " << dest << std::endl;
    }
}
