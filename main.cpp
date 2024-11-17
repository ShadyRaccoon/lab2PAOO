#include <iostream>

#include "item4.hpp"
#include "item4_1.hpp"
#include "item5.hpp"
#include "item6.hpp"

void demoItem4();
void demoItem5();
void demoItem6();

int main(){
    demoItem4();
    demoItem5();
    demoItem6();
    return 0;
}

void demoItem4(){
    //demonstratie constructori implicit cu lista de init/parametrizat
    Business4 obj1;
    Business4 obj2(20, 100);

    std::cout << "ANGAJATI BUSINESS1 : " << obj1.getAngajati()
              << "| COMENZI BUSINESS1 :" << obj1.getComenzi() << std::endl;

    std::cout << "ANGAJATI BUSINESS2 : " << obj2.getAngajati()
              << "| COMENZI BUSINESS2 :" << obj2.getComenzi() << std::endl;

    //testare setters
    obj1.setAngajati(25);
    obj1.setComenzi(200);
    std::cout << "ANGAJATI BUSINESS1 UPDATE: " << obj1.getAngajati()
              << "| COMENZI BUSINESS1 UPDATE:" << obj1.getComenzi() << std::endl;

    obj2.plaseazaComanda();
    std::cout << "ANGAJATI BUSINESS2 UPDATE: " << obj2.getAngajati()
              << "| COMENZI BUSINESS2 UPDATE:" << obj2.getComenzi() << std::endl;
    std::cout << "VANZARI: " << Business4::vanzari(-1) << std::endl;

    //prin folosirea metodelor care intorc valori statice se evita static init order fiasco
    std::cout << "TAXE DE PLATIT: " << IRS4::taxes() << std::endl;
}

void demoItem5(){
    item5 obj1; //constructor
    item5 obj2(obj1); //copy constructor
    {
        item5 obj3; //constructor
        obj3 = obj2; //copy operator
    } //destructor pentru opj3
    //destructori pentru restul obiectelor out of scope
}

void demoItem6(){

}