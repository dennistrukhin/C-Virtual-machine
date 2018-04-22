//
// Created by Dennis Trukhin on 21/04/2018.
//

#ifndef VIRTUALMACHINE_PROCESSOR_H
#define VIRTUALMACHINE_PROCESSOR_H


#include "FileReader.h"
#include "Variables.h"

class Processor {
private:
    FileReader *reader;
    Variables *v;

public:
    explicit Processor(FileReader *fileReader);
    void process();
};


#endif //VIRTUALMACHINE_PROCESSOR_H
