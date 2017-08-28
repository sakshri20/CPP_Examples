//
//  OperatorOverloading.hpp
//  FunctionOperatorOverloading
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#ifndef OperatorOverloading_hpp
#define OperatorOverloading_hpp

#include <stdio.h>
#include <iostream>

class Box{
    
public:
    double length, breadth, height;
    
    double getVolume();
    void setLength(double len);
    void setBreadth(double bred);
    void setHeight(double heig);
    Box operator+(const Box& b);
    
};

#endif /* OperatorOverloading_hpp */
