//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_VARIABLE_H
#define VIRTUALMACHINE_VARIABLE_H


#include <tic.h>

class Variable {
private:
    char type;
    int size;
    void * addr;
public:
    static const char TYPE_INTEGER = 'I';
    static const char TYPE_FLOAT = 'F';
    static const char TYPE_STRING = 'S';

    explicit Variable(int i);
    explicit Variable(float i);
    explicit Variable(char * i);

    bool isInt();
    bool isFloat();
    bool isString();

    int getIntValue();
    float getFloatValue();
    char * getStringValue();

    int getSize();

    void * getAddr();
};


#endif //VIRTUALMACHINE_VARIABLE_H
