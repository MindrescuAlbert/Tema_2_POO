#include "Faina.h"

Faina::Faina(const Faina &a)
{
    pret=a.pret;
    kilos=a.kilos;
    calitate=a.calitate;
    nume=a.nume;

}

Faina& Faina::operator=(const Faina &a)
{
    nume.clear();
    kilos=a.kilos;
    calitate=a.calitate;
    pret=a.pret;
    nume=a.nume;
    return *this;
}

void Faina::citire(istream &in)
{
    nume.clear();
    int bl,br,p;
    cout<<"Ce calitate are faina?";
    in>>br;
    cout<<"Cate kilograme de faina de calitate "<<br<<"?";
    in>>bl;
    cout<<"Care este pretul unui kilogram de faina de calitate "<<br<<"?";
    in>>p;
    this->pret=p;
    this->kilos=bl;
    this->calitate=br;
    this->nume="Faina";
}

void Faina::afisare(ostream &out) const
{
    out<<nume<<" "<<pret<<" "<<kilos<<" "<<calitate<<"\n";
}

int Faina::Getkilos()
{
    return kilos;
}

int Faina::Getcalitate()
{
    return calitate;
}

int Faina::Getpret()
{
    return this->pret;
}

void Faina::Setkilos(int kg)
{
    kilos-=kg;
}
