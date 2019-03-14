#ifndef REGISTERS
#define REGISTERS

#include <stdint.h>
#include "config.h"
#include <iostream>

class Registers{
    public:
    Registers();
    ~Registers();
    int32_t readRegister(int index);
    void writeRegister(int index, int32_t content);

    private:
    int32_t* registers;

};

#endif