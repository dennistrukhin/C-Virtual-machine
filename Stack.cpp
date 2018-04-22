//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <cstdlib>
#include <cstring>
#include <iostream>
#include "Stack.h"
#include "Word.h"

Stack::Stack() = default;

void Stack::push(int i) {
    size_t newSize = size + Word::WORD_SIZE;
    auto newM = (unsigned char *) malloc((size_t) size);
    if (size > 0) {
        memcpy(newM, m, size);
    }
    memcpy(newM + size, &i, sizeof(int));
    auto oldM = m;
    m = newM;
    if (size > 0) {
        delete oldM;
    }
    size = newSize;
}

void Stack::dump() {
    std::cout << "Stack: <0x";
    for (int i = 0; i < size; i++) {
        std::cout << std::hex << (int)m[i];
    }
    std::cout << ">" << std::endl;
}

int Stack::popInteger() {
    auto addr = size - Word::WORD_SIZE;
    int value;
    memcpy(&value, m + addr, sizeof(int));
    auto newM = (unsigned char *) malloc(addr);
    memcpy(newM, m, addr);
    auto oldM = m;
    m = newM;
    delete oldM;
    size = addr;
    return value;
}
