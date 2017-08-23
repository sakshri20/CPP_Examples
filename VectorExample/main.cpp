//
//  main.cpp
//  VectorExample
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#include "main.hpp"
#include <iostream>
#include "VectorExample.hpp"

using namespace std;

int main(){
    
    VectorExample obj;
    obj.printPushBack();
    cout << "\n" << "\n";
    obj.printIterator();
    cout << "\n" << "\n";
    obj.printReverseIterator();
    obj.retunSizes();
    obj.returnPositions();
    return 0;
}
