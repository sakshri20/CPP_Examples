//
//  ConstantExample.hpp
//  ConstantExample
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#ifndef ConstantExample_hpp
#define ConstantExample_hpp

#include <stdio.h>
#include <iostream>

class ConstantExample {
    
    int value;
    
public:
    
    ConstantExample(int v);
    int getValue() const;
//    int getValue() ;
    
};

#endif /* ConstantExample_hpp */
