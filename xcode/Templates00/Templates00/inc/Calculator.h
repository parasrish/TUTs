#ifndef CALCULATOR_H
#define CALCULATOR_H

template <typename TYPE>
class Calculator{
    
public:
    Calculator();
    TYPE Sum(TYPE param1, TYPE param2);
    
};


/**
 * To avoid template related compilation error
 * when templates are used in header and source files
 *
 * This class file has been removed from the project-source file.
 * However, is present in the project folder
 * Gets compiled with the header-file (being included)
 */
#include "Calculator.cpp"

#endif