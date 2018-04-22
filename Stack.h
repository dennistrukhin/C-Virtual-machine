//
// Created by Dennis Trukhin on 22/04/2018.
//

#ifndef VIRTUALMACHINE_STACK_H
#define VIRTUALMACHINE_STACK_H


class Stack {
private:
    size_t size = 0;
    unsigned char *m;
public:
    Stack();

    void push(int);

    int popInteger();

    void dump();
};


#endif //VIRTUALMACHINE_STACK_H
