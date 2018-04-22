//
// Created by Dennis Trukhin on 21/04/2018.
//

#include <iostream>
#include "Processor.h"
#include "Workers/Declarator.h"
#include "Workers/NumberLoader.h"
#include "Workers/StringLoader.h"

Processor::Processor(FileReader *fileReader) {
    reader = fileReader;
    v = new Variables();
}

void Processor::process() {
    Word word;
    while (!reader->isEOF()) {
        word = reader->getWord();
        if (word.is((unsigned char *) "DECL")) {
            auto declarator = new Declarator(reader, v);
            declarator->declare();
        } else if (word.is((unsigned char *) "LDNM")) {
            auto numberLoader = new NumberLoader(reader, v);
            numberLoader->loadNumber();
        } else if (word.is((unsigned char *) "LDST")) {
            auto stringLoader = new StringLoader(reader, v);
            stringLoader->loadString();
        } else {
            word.dump();
        }
    }
    std::cout << std::endl;
    v->dump();
}
