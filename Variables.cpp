//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <iostream>
#include "Variables.h"

Variables::Variables() = default;

void Variables::add(int i, Variable *variable) {
    auto it = v.begin();
    v.insert(it, std::pair<int, Variable *>(i, variable));
}

void Variables::set(int i, int value) {
    auto pos = v.find(i);
    char *es;
    if (pos == v.end()) {
        sprintf(es, "%s %d %s", "SEGFAULT: variable with index", i, "does not exist.");
        throw es;
    }
    Variable *existingVar = pos->second;
    if (!existingVar->isInt()) {
        sprintf(es, "SEGFAULT: Incompatible types: %s and %s", "INT", existingVar->getTypeString());
        throw es;
    }
    delete(existingVar);
    auto *var = new Variable(value);
    v.at(i) = var;
}

void Variables::set(int i, float value) {
    auto pos = v.find(i);
    char *es;
    if (pos == v.end()) {
        sprintf(es, "%s %d %s", "SEGFAULT: variable with index", i, "does not exist.");
        throw es;
    }
    Variable *existingVar = pos->second;
    if (!existingVar->isFloat()) {
        sprintf(es, "SEGFAULT: Incompatible types: %s and %s", "FLT", existingVar->getTypeString());
        throw es;
    }
    delete(existingVar);
    auto *var = new Variable(value);
    v.at(i) = var;
}

void Variables::set(int i, char *value) {
    auto pos = v.find(i);
    char *es;
    if (pos == v.end()) {
        sprintf(es, "%s %d %s", "SEGFAULT: variable with index", i, "does not exist.");
        throw es;
    }
    Variable *existingVar = pos->second;
    if (!existingVar->isString()) {
        sprintf(es, "SEGFAULT: Incompatible types: %s and %s", "STR", existingVar->getTypeString());
        throw es;
    }
    delete(existingVar);
    auto *var = new Variable(value);
    v.at(i) = var;
}

void Variables::dump() {
    auto it = v.begin();
    int i;
    while (it != v.end()) {
        std::cout << it->first << " => ";
        Variable var = *(it->second);
        if (var.isInt()) {
            std::cout << "INT " << var.getIntValue();
        } else if (var.isFloat()) {
            std::cout << "FLT " << var.getFloatValue();
        } else if (var.isString()) {
            std::cout << "STR " << var.getStringValue();
        } else {
            std::cout << "UND ";
        }
        std::cout << " (" << var.getSize() << ")" << std::endl;
        it++;
    }
}
