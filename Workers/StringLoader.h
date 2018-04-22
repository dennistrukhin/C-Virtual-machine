//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_STRINGLOADER_H
#define VIRTUALMACHINE_STRINGLOADER_H


#include "../FileReader.h"
#include "../Variables.h"

class StringLoader {
private:
    FileReader *reader;
    Variables *variables;
public:
    explicit StringLoader(FileReader *fr, Variables *v);
    void loadString();
};


#endif //VIRTUALMACHINE_STRINGLOADER_H
