#include<iostream>
#include "circle.hpp"
#include "square.hpp"

using namespace geometry;


int main(){
    double radius = 3.05, side = 7.43;

    std::cout << "Area of circle is: " << area::circle(radius) << std::endl;
    std::cout << "Area of square is: " << area::square(side) << std::endl;


    return 0;
}

