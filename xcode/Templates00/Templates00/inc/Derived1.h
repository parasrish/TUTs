#ifndef DERIVED1_H
#define DERIVED1_H

#include "Base.h"

class Derived1: public Base
{
public:
    void foo(float x) override {
        cout << "Derived1::foo()" << endl;
    }
};


#endif