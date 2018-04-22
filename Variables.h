//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_VARIABLES_H
#define VIRTUALMACHINE_VARIABLES_H


#include <map>
#include "Variable.h"

class Variables {
private:
    std::map<int, Variable *> v;

    void onNonExistentIndexError(int i);

    void onNonCompatibleTypesError(char *t1, char *t2);

public:
    Variables();

    void add(int i, Variable *variable);

    void set(int i, int value);

    void set(int i, float value);

    void set(int i, char *value);

    char getType(int i);

    Variable *get(int i);

    void dump();
};


#endif //VIRTUALMACHINE_VARIABLES_H
