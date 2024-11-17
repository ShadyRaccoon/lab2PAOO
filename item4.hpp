#include <iostream>

class Business4{
    public:
        Business4();
        Business4(int angajati, int comenzi);
        static int vanzari(int flag);
        int getAngajati();
        int getComenzi();
        void setAngajati(int n);
        void setComenzi(int n); 
        void plaseazaComanda();
    private:
        int nrAngajati;
        int nrComenzi;
};