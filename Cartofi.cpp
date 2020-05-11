#include "Cartofi.h"

Cartofi::Cartofi(const Cartofi &a)
{
    pret=a.pret;
    albi=a.albi;
    rosii=a.rosii;
    nume=a.nume;

}

Cartofi& Cartofi::operator=(const Cartofi &a)
{
    nume.clear();
    albi=a.albi;
    rosii=a.rosii;
    pret=a.pret;

    return *this;
}

void Cartofi::citire(istream &in)
{
    nume.clear();
    int bl,br,p;
    cout<<"Care este pretul unui cartof?\n";
    in>>p;
    this->pret=p;
    cout<<"Cati cartofi albi si cat cartofi rosii?\n";
    in>>bl>>br;
    this->albi=bl;
    this->rosii=br;
    this->nume="Cartofi";
}

void Cartofi::afisare(ostream &out) const
{
    out<<nume<<" "<<pret<<" "<<albi<<" "<<rosii<<"\n";
}

int Cartofi::Getalbi()
{
    return this->albi;
}

int Cartofi::Getrosii()
{
    return this->rosii;
}

int Cartofi::Getpret()
{
    return this->pret;
}

void Cartofi::Setcartofi(int a,int r)
{
    albi-=a;
    rosii-=r;
}
