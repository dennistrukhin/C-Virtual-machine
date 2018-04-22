//
// Created by Dennis Trukhin on 22/04/2018.
//

#include <iostream>
#include "StringLoader.h"

StringLoader::StringLoader(FileReader *fr, Variables *v) {
    reader = fr;
    variables = v;
}

void StringLoader::loadString() {
    auto dest = reader->getWord().asInt();
    auto length = reader->getWord().asInt();
    int bytesRead = 0;
    auto * str = (unsigned char *)malloc((size_t)length + 1);
    while (bytesRead < length) {
        auto charSeq = reader->getWord().asString();
        for (int i = 0; i <= Word::WORD_SIZE; i++) {
            str[i + bytesRead] = charSeq[i];
        }
        bytesRead += Word::WORD_SIZE;
    }
    str[length] = '\0';
    variables->set(dest, str);
}
