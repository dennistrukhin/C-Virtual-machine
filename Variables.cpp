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
    if (pos == v.end()) {
        onNonExistentIndexError(i);
    }
    Variable *existingVar = pos->second;
    if (!existingVar->isInt()) {
        onNonCompatibleTypesError(const_cast<char *>("INT"), existingVar->getTypeString());
    }
    delete (existingVar);
    auto *var = new Variable(value);
    v.at(i) = var;
}

void Variables::set(int i, float value) {
    auto pos = v.find(i);
    if (pos == v.end()) {
        onNonExistentIndexError(i);
    }
    Variable *existingVar = pos->second;
    if (!existingVar->isFloat()) {
        onNonCompatibleTypesError(const_cast<char *>("FLT"), existingVar->getTypeString());
    }
    delete (existingVar);
    auto *var = new Variable(value);
    v.at(i) = var;
}

void Variables::set(int i, unsigned char *value) {
    auto pos = v.find(i);
    if (pos == v.end()) {
        onNonExistentIndexError(i);
    }
    Variable *existingVar = pos->second;
    if (!existingVar->isString()) {
        onNonCompatibleTypesError(const_cast<char *>("STR"), existingVar->getTypeString());
    }
    delete (existingVar);
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
            std::cout << "STR \"" << var.getStringValue() << "\"";
        } else {
            std::cout << "UND ";
        }
        std::cout << " (" << var.getSize() << ")" << std::endl;
        it++;
    }
}

void Variables::onNonExistentIndexError(int i) {
    char *es;
    sprintf(es, "SEGFAULT: variable with index %d does not exist.", i);
    throw es;
}

void Variables::onNonCompatibleTypesError(char *t1, char *t2) {
    char *es;
    sprintf(es, "SEGFAULT: Incompatible types: %s and %s", t1, t2);
    throw es;
}

char Variables::getType(int i) {
    auto pos = v.find(i);
    if (pos == v.end()) {
        onNonExistentIndexError(i);
    }
    Variable *existingVar = pos->second;
    return existingVar->getType();
}

Variable *Variables::get(int i) {
    auto pos = v.find(i);
    if (pos == v.end()) {
        onNonExistentIndexError(i);
    }
    Variable *existingVar = pos->second;
    return  existingVar;
}
