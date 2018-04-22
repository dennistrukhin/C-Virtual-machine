//
// Created by Dennis Trukhin on 21/04/2018.
//

#include "Processor.h"

void Processor::process() {
    Word word;
    while (!reader->isEOF()) {
        word = reader->getWord();
        word.dump();
    }
}

Processor::Processor(FileReader *fileReader) {
    reader = fileReader;
    v = new Variables();
    v->add(0, new Variable((int) 42));
    v->add(1, new Variable((int) 100));
    v->add(2, new Variable((float) 2.78));
    v->add(3, new Variable(const_cast<char *>("Some string")));
    v->dump();
    v->set(1, (int)99);
    v->set(3, const_cast<char *>("New string!"));
    v->dump();
}
