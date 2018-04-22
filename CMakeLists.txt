cmake_minimum_required(VERSION 3.8)
project(VirtualMachine)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp FileReader.cpp FileReader.h Word.cpp Word.h Processor.cpp Processor.h Variables.cpp Variables.h Variable.cpp Variable.h Workers/Declarator.cpp Workers/Declarator.h Workers/NumberLoader.cpp Workers/NumberLoader.h Workers/StringLoader.cpp Workers/StringLoader.h Stack.cpp Stack.h Workers/IntegerPusher.cpp Workers/IntegerPusher.h Workers/VariablePusher.cpp Workers/VariablePusher.h Workers/IntegerAdder.cpp Workers/IntegerAdder.h Workers/IntegerMultiplier.cpp Workers/IntegerMultiplier.h Workers/VariablePopper.cpp Workers/VariablePopper.h Workers/VariableDisplayer.cpp Workers/VariableDisplayer.h)
add_executable(VirtualMachine ${SOURCE_FILES})