#include <iostream>
#include "item4.hpp"

Business4::Business4()
    : nrAngajati(0), nrComenzi(0){
}

Business4::Business4(int angajati, int comenzi){
    nrAngajati = angajati;
    nrComenzi = comenzi;
}

int Business4::getComenzi(){
    return nrComenzi;
}

int Business4::getAngajati(){
    return nrAngajati;
}

void Business4::setComenzi(int n){
    nrComenzi = n;
}

void Business4::setAngajati(int n){
    nrAngajati = n;
}

void Business4::plaseazaComanda(){
    setComenzi(getComenzi() + 1);
    vanzari(0);
}

int Business4::vanzari(int flag){
    static int vanzari = 0;

    switch(flag){
        case 0:
            vanzari += 100;
            break; 
        case 1:
            vanzari = 0;
            break;
        default:
            std::cout<<"FLAG DE OPERATIE INVALID";
            break;
    }

    return vanzari;
}