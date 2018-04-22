//
// Created by Dennis Trukhin on 21/04/2018.
//

#include <iostream>
#include "Processor.h"
#include "Workers/Declarator.h"
#include "Workers/ValueMover.h"

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
        } else if (word.is((unsigned char *) "MVVL")) {
            auto valueMover = new ValueMover(reader, v);
            valueMover->moveValue();
        } else {
            word.dump();
        }
    }
    std::cout << std::endl;
    v->dump();
}
