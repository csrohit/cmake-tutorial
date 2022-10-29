#include "Message.hpp"
#include<iostream>



int main(){

    Message hello("Hello world!");
    Message bye("Bye world!");
    std::cout << hello;
    std::cout << bye;

    return 0;
}