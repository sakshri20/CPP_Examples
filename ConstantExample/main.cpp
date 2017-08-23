//
//  main.cpp
//  ConstantExample
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#include "main.hpp"
#include <iostream>
#include "ConstantExample.hpp"

int main(){
    
    /* When a function is declared as const, it can be called on any type of object. Non-const functions can only be called by non-const objects.
     The below line and other commented line in the Constantexample.cpp & Constantexample.hpp will throw this error:
     member function 'getValue' not viable: 'this' argument
     has type 'const ConstantExample', but function is not marked const.
*/
    
//    const ConstantExample obj(20);
    
    ConstantExample obj(20);
    int v = obj.getValue();
    std::cout << "Value is " << v << "\n";
    
    return 0;
}
