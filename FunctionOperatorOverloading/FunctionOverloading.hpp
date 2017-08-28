//
//  FunctionOverloading.hpp
//  FunctionOperatorOverloading
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#ifndef FunctionOverloading_hpp
#define FunctionOverloading_hpp

#include <stdio.h>
#include <iostream>

/*Function Overloading means having multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types and/or the number of arguments in the argument list. You cannot overload function declarations that differ only by return type.*/

class FunctionOverloading{
    
public:
    int length, width;
    double radius;
    int calculateArea(int len);               //Function calculateArea with one integer argument and integer return type.
    int calculateArea(int len, int wid);      //Function calculateArea with two integer arguments and integer return type.
    double calculateArea(double rad);         //Function calculateArea with one double argument and double return type.
};

#endif /* FunctionOverloading_hpp */
