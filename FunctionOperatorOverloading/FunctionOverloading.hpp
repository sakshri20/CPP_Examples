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

class FunctionOverloading{
    
public:
    int length, width;
    double radius;
    int calculateArea(int len);
    int calculateArea(int len, int wid);
    double calculateArea(double rad);
};

#endif /* FunctionOverloading_hpp */
