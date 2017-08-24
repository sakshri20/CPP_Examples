//
//  FunctionOverloading.cpp
//  FunctionOperatorOverloading
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#include "FunctionOverloading.hpp"
#include <iostream>
#include <cmath>

int FunctionOverloading::calculateArea(int len){
    length = len;
    int area = pow(len,2);
    return area;
}

int FunctionOverloading::calculateArea(int len, int wid){
    length = len;
    width = wid;
    int area = (length * width);
    return area;
}

double FunctionOverloading::calculateArea(double rad){
    radius = rad;
    double area = 3.14 * pow(radius,2);
    return area;
}
