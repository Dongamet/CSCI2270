#include "stepcounter.h"
#include <iostream>

StepCounter::StepCounter(){
    std::cout << "I am a step counter" << std::endl;
}

int StepCounter::get(){
    return counter;
}

void StepCounter::Increment(){
    counter++;
}