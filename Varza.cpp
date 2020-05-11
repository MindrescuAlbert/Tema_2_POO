#include "Varza.h"

Varza::Varza(const Varza &a)
{
    pret=a.pret;
    bucati=a.bucati;
    nume=a.nume;
}

Varza& Varza::operator=(const Varza &a)
{
    nume.clear();
    bucati=a.bucati;
    pret=a.pret;
    return *this;
}

void Varza::citire(istream &in)
{
    nume.clear();
    int buc,p;
    cout<<"Care este pretul unei bucati de varza?\n";
    in>>p;
    cout<<"Cate bucati de varza in stoc?\n";
    in>>buc;
    this->pret=p;
    this->bucati=buc;
    this->nume="Varza";
}

void Varza::afisare(ostream &out) const
{
    out<<nume<<" "<<pret<<" "<<bucati<<"\n";
}

int Varza::Get()
{
    return this->bucati;
}

int Varza::Getpret()
{
    return this->pret;
}

void Varza::Set(int buc)
{
    bucati-=buc;
}
