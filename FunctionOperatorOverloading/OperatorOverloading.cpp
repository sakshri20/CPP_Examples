//
//  OperatorOverloading.cpp
//  FunctionOperatorOverloading
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#include "OperatorOverloading.hpp"

double Box::getVolume(){
    return length * breadth * height;
}

void Box::setLength(double len){
    length = len;
}

void Box::setBreadth(double bred){
    breadth = bred;
}

void Box::setHeight(double heig){
    height = heig;
}

Box Box::operator+(const Box& b){
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}
