#ifndef DERIVED2_H
#define DERIVED2_H

#include "Base.h"

class Derived2: public Base
{
public:
/**
 * Making this method change as "void foo(int c) override{..}"
 * will show you the error at the time of compilation itself, that
 * "probably you are hiding the already existent method of such sort in parent"
 * which can eventually prevent typos
 */
void foo(float x) override {
    cout << "Derived2::foo(float)" << endl;
}
};

#endif