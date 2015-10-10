#include "Common.h"
#include "Calculator.h"


template <typename TYPE>
Calculator<TYPE>::Calculator()
{
}

template <class TYPE>
TYPE Calculator<TYPE>::Sum(TYPE param1, TYPE param2){
    
    cout << "Calculator::sum" << endl;
    cout << param1 <<endl;
    cout << param2 <<endl;
    
    TYPE result = param1 + param2 ;
    
    return result;
}