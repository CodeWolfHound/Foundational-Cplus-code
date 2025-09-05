#include "define.h"
#include <iostream>

int Multiplay(int a, int b) {
    return a * b;
}   

void log(const char* message) { //Definition - hey this is a function definition of log
    std::cout << message << std::endl;
}

void log(int message) { //Definition - hey this is a function definition of log
    std::cout << message << std::endl;
}