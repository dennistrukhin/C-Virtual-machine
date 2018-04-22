//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_DECLARATOR_H
#define VIRTUALMACHINE_DECLARATOR_H


#include "../FileReader.h"
#include "../Variables.h"

class Declarator {
private:
    FileReader *reader;
    Variables *variables;
public:
    explicit Declarator(FileReader *fr, Variables *v);
    void declare();
};


#endif //VIRTUALMACHINE_DECLARATOR_H
