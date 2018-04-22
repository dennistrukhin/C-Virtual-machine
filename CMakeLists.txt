cmake_minimum_required(VERSION 3.8)
project(VirtualMachine)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp FileReader.cpp FileReader.h Word.cpp Word.h Processor.cpp Processor.h Variables.cpp Variables.h Variable.cpp Variable.h Workers/Declarator.cpp Workers/Declarator.h Workers/ValueMover.cpp Workers/ValueMover.h)
add_executable(VirtualMachine ${SOURCE_FILES})