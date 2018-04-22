//
// Created by Dennis Trukhin on 21/04/2018.
//

#include <iostream>
#include "FileReader.h"

FileReader::FileReader(char *fileName) {
    file.open(fileName, std::istream::binary);
    file.seekg(0, file.end);
    length = file.tellg();
    file.seekg(0, file.beg);
    std::cout << length << std::endl;
}

Word FileReader::getWord() {
    auto * buffer = new char [Word::WORD_SIZE];
    file.read(buffer, Word::WORD_SIZE);
    pointer += Word::WORD_SIZE;
    auto word = new Word(buffer);
    return *word;
}

bool FileReader::isEOF() {
    return pointer >= length;
}
