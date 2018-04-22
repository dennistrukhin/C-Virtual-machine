//
// Created by Dennis Trukhin on 21/04/2018.
//

#ifndef VIRTUALMACHINE_FILEREADER_H
#define VIRTUALMACHINE_FILEREADER_H


#include <fstream>
#include "Word.h"

class FileReader {
private:
    std::ifstream file;
    long long int length;
    long long int pointer = 0;
public:
    explicit FileReader(char *fileName);

    FileReader();

    bool isEOF();

    Word getWord();
};


#endif //VIRTUALMACHINE_FILEREADER_H
