//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <cstdlib>
#include <iostream>
#include "Variable.h"

Variable::Variable(int i) {
    int *ptr;
    type = TYPE_INTEGER;
    addr = malloc(sizeof(int));
    size = sizeof(int);
    ptr = (int *) addr;
    *ptr = i;
}

Variable::Variable(float i) {
    float *ptr;
    type = TYPE_FLOAT;
    addr = malloc(sizeof(float));
    size = sizeof(float);
    ptr = (float *) addr;
    *ptr = i;
}

Variable::Variable(char *str) {
    int l = 0;
    char *p = str;
    while (*p != '\0') {
        l++;
        p++;
    }
    size_t strLen = sizeof(char) * l + 1;
    addr = malloc(strLen);
    memcpy(addr, str, strLen);
    size = l;
    type = TYPE_STRING;
}

void *Variable::getAddr() {
    return addr;
}

bool Variable::isInt() {
    return type == TYPE_INTEGER;
}

bool Variable::isFloat() {
    return type == TYPE_FLOAT;
}

bool Variable::isString() {
    return type == TYPE_STRING;
}

int Variable::getIntValue() {
    return *((int *) addr);
}

float Variable::getFloatValue() {
    return *((float *) addr);
}

int Variable::getSize() {
    return size;
}

char *Variable::getStringValue() {
    return (char *) addr;
}

char *Variable::getTypeString() {
    if (type == TYPE_INTEGER) {
        return const_cast<char *>("INT");
    } else if (type == TYPE_FLOAT) {
        return const_cast<char *>("FLT");
    } else if (type == TYPE_STRING) {
        return const_cast<char *>("STR");
    } else {
        return const_cast<char *>("UND");
    }
}
