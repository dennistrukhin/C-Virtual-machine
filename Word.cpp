//
// Created by Dennis Trukhin on 21/04/2018.
//

#include <iostream>
#include "Word.h"

Word::Word(const char * word) {
    for (int i = 0; i < 4; i++) {
        w[i] = (unsigned char)word[i];
    }
}

Word::Word(const unsigned char * word) {
    for (int i = 0; i < 4; i++) {
        w[i] = word[i];
    }
}

unsigned char *Word::getWord() {
    return w;
}

void Word::dump() {
    std::cout << w[0] << w[1] << w[2] << w[3] << ' ';
}

float Word::asFloat() {
    float f;
    unsigned char b[] = {w[3], w[2], w[1], w[0]};
    memcpy(&f, &b, sizeof(f));
    return f;
}

int Word::asInt() {
    int f;
    unsigned char b[] = {w[3], w[2], w[1], w[0]};
    memcpy(&f, &b, sizeof(f));
    return f;
}

unsigned char *Word::asString() {
    return w;
}

bool Word::is(unsigned char *c) {
    for (int i = 0; i < WORD_SIZE; i++) {
        if (w[i] != c[i]) {
            return  false;
        }
    }
    return true;
}

Word::Word() = default;
