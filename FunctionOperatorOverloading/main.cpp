//
//  main.cpp
//  FunctionOperatorOverloading
//
//  Created by Sakshi Shrivastava on 8/23/17.
//

#include "main.hpp"
#include "FunctionOverloading.hpp"
#include "OperatorOverloading.hpp"

int main(){
    
    FunctionOverloading obj1;
    int areaSq = obj1.calculateArea(10);
    std::cout << "Area of sqaure of length 10 is " << areaSq << "\n";
    int areaRec = obj1.calculateArea(5,6);
    std::cout << "Area of rectangle of length 5 and width 6 is " << areaRec << "\n";
    double areaCir = obj1.calculateArea(3.5);
    std::cout << "Area of circle of radius 3.5 is " << areaCir << "\n";
    
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;
    
    box1.setLength(2.0);
    box1.setBreadth(2.0);
    box1.setHeight(2.0);
    volume = box1.getVolume();
    std::cout << "Box 1 volume = " << volume << "\n";
    
    box2.setLength(3.0);
    box2.setBreadth(3.0);
    box2.setHeight(3.0);
    volume = box2.getVolume();
    std::cout << "Box 1 volume = " << volume << "\n";
    
    box3 = box1 + box2;
    volume = box3.getVolume();
    std::cout << "Box 1 volume = " << volume << "\n";
    
    return 0;
}
