//
// Created by Dennis Trukhin on 21/04/2018.
//

#ifndef VIRTUALMACHINE_WORD_H
#define VIRTUALMACHINE_WORD_H

class Word {
public:
    static const int WORD_SIZE = 4;

    Word();

    explicit Word(const unsigned char *word);

    explicit Word(const char *word);

    unsigned char *getWord();

    float asFloat();

    int asInt();

    bool is(unsigned char * c);

    void dump();

private:
    unsigned char w[Word::WORD_SIZE];
};


#endif //VIRTUALMACHINE_WORD_H
