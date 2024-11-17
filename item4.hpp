#include <iostream>

class Business4{
    public:
        Business4();
        Business4(int angajati, int comenzi);
        static int vanzari(int flag, int amenda = 0);
        int getAngajati();
        int getComenzi();
        void setAngajati(int n);
        void setComenzi(int n); 
    private:
        int nrAngajati;
        int nrComenzi;
};