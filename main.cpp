#include <iostream>
#include "FileReader.h"
#include "Processor.h"

int main(int argc, char ** argv) {
    if (argc < 2) {
        std::cout << "Byte code file name required";
        return 1;
    }
    try {
        auto reader = new FileReader(argv[1]);
        auto *processor = new Processor(reader);
        processor->process();
        return 0;
    } catch (const char *e) {
        std::cout << e << std::endl;
        return 1;
    }
}