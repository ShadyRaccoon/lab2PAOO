#include <iostream>
#include "item4_1.hpp"

float IRS4::taxes(){
    static float tax = 0;
    tax += Business4::vanzari(-1) * 0.15; //se returneaza valoarea fara a o modifica cu un flag invalid
    return tax;
}