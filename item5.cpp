#include <iostream>
#include "item5.hpp"

item5::item5(){
    std::cout << "CONSTRUCTOR APELAT!\n";
}

item5::~item5(){
    std::cout << "DESTRUCTOR APELAT!\n";
}

item5::item5(const item5& other){
    std::cout << "COPY CONSTRUCTOR APELAT!\n";
}
    
item5& item5::operator=(const item5& other){
    std::cout << "OPERATOR DE COPIERE FOLOSIT!\n";
    return *this;
}