//
//  main.cpp
//  FunctionOperatorOverloading
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#include "main.hpp"
#include "FunctionOverloading.hpp"

int main(){
    
    FunctionOverloading obj1;
    int areaSq = obj1.calculateArea(10);
    std::cout << "Area of sqaure of length 10 is " << areaSq << "\n";
    int areaRec = obj1.calculateArea(5,6);
    std::cout << "Area of rectangle of length 5 and width 6 is " << areaRec << "\n";
    double areaCir = obj1.calculateArea(3.5);
    std::cout << "Area of circle of radius 3.5 is " << areaCir << "\n";
    
    return 0;
}
