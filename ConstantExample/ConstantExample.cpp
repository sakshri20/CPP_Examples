//
//  ConstantExample.cpp
//  ConstantExample
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#include "ConstantExample.hpp"

ConstantExample::ConstantExample(int v):value(v){
    std::cout << " value is " << value << "\n";
}

int ConstantExample::getValue() const{
    return value;
}

//int ConstantExample::getValue(){
//    return value;
//}

