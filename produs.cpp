#include "produs.h"

istream& operator>>(istream &in,produs &a)
{
    a.citire(in);
    return in;
}

ostream&operator<<(ostream &out,const produs &a)
{
    a.afisare(out);
    return out;
}

produs::produs()
{
    pret=0;
    nume.clear();
}

produs::produs(int p,string s)
{
    pret=p;
    nume=s;
}

produs::produs(const produs&a)
{
    pret=a.pret;
    nume=a.nume;
}

produs::~produs()
{
    nume.clear();

}
