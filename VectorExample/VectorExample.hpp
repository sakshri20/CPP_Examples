//
//  VectorExample.hpp
//  VectorExample
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#ifndef VectorExample_hpp
#define VectorExample_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class VectorExample{
    
public:
    vector <int> gl;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;
    
    void printPushBack();
    void printIterator();
    void printReverseIterator();
    void retunSizes();
    void returnPositions();
};

#endif /* VectorExample_hpp */
