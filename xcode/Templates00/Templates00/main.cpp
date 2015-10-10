//
//  main.cpp
//  Templates00
//
//  Created by Srishti Parashar on 27/08/15.
//  Copyright © 2015 Srishti Parashar. All rights reserved.
//

#include "Common.h"

///template usage includes
#include "Calculator.h"

///override example includes
#include "Derived1.h"
#include "Derived2.h"

///template specialization includes
#include "VectorT.h"
#include "VectorBool.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, Calculator!\n";
    
    /**
     * TEMPLATES USAGE
     */
    Calculator<int> cObj;
    int out = cObj.Sum(2,3);
    cout << "out : " << out << endl;
    
    Calculator<string> cObjS;
    string outS = cObjS.Sum("A", "B");
    cout << "outS : " << outS << endl;
    
    /**
     * OVERRIDE TERMINOLOGY
     */
    Derived1 d1;
    d1.foo(12.0);
    
    Derived2 d2;
    d2.foo(12.0);
    
    /**
     * TEMPLATE SPECIALIZATION
     * E.g: Vector of int, strings, etc. would need 2D array space
     *      Vector of bool, 1D would suffice (wasting 2D array space can be avoided)
     * 
     * To show, how same code be witten in a specialized way, for a particular case
     */
    Vector<bool> vectorTB;
    vectorTB.insert(true);
    vectorTB.insert(false);
    cout << "vectorTB size: "<< vectorTB.size() << endl;
    
    Vector<bool> vectorB;
    vectorB.insert(true);
    vectorB.insert(false);
    cout << "vectorB size: "<< vectorB.size() << endl;
    
    cout << "Bool size: "<< sizeof(bool) << endl;
    
    /**
     * PARTIAL TEMPLATE SPECIALIZATION/ TEMPLATE OVERRIDE
     */
    
    
    cout << "Bye, Calculator!\n";
    
    
    return 0;
}
