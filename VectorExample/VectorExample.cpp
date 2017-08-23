//
//  VectorExample.cpp
//  VectorExample
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#include "VectorExample.hpp"

using namespace std;

/*Using push_back function. push_back always puts a new element at the end of the vector*/

void VectorExample::printPushBack(){
    for (int j = 1; j <= 5 ; j++) {
        gl.push_back(j);
    }
//    std::cout << gl;
}

/*Pring the elements of the vector from first through last*/

void VectorExample::printIterator(){
    cout << "Output of begin & end \t:\t";
    for (i = gl.begin(); i != gl.end() ; ++i) {
        cout << *i << "\t";
    }
}

/*Printing elements of the vector from last through first*/

void VectorExample::printReverseIterator(){
    cout << "Output of rbegin & rend \t:\t";
    for (ir = gl.rbegin(); ir != gl.rend() ; ++ir) {
        cout << *ir << "\t";
    }
}

/*Printing size, max_size, and capacity of the vector*/

void VectorExample::retunSizes(){
    cout << "\nSize : " << gl.size() << "\n";
    cout << "MAx Size : " << gl.max_size() << "\n";
    cout << "Capacity : " << gl.capacity() << "\n";
}

/*Printing elements stored at a specific location in the vector*/
void VectorExample::returnPositions(){
    cout <<"Reference operator [g] : gl[2] = " << gl[2] << "\n";
    cout << "at : at(4) = " << gl.at(4) << "\n";
    cout << "front() = " << gl.front() << "\n";
    cout << "back() = " << gl.back() << "\n";
}
