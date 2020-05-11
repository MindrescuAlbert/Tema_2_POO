#include "VinVarsat.h"

VinVarsat::VinVarsat(const VinVarsat &v)
{
    pret=v.pret;
    nume=v.nume;
    volum=v.volum;
    tip=v.tip;
}

VinVarsat& VinVarsat::operator=(const VinVarsat &v)
{
    nume.clear();
    tip.clear();
    pret=v.pret;
    nume=v.nume;
    volum=v.volum;
    tip=v.tip;
    return *this;
}

void VinVarsat::citire(istream &in)
{
    int p,vol;
    string t;
    cout<<"De care vin varsat?(alb/rosu)\n";
    in>>t;
    cout<<"Cati litri de vin varsat "<<t<<"?";
    in>>vol;
    cout<<"Care este pretul unui litru de vin varsat"<<t<<"?";
    in>>p;
    this->nume="VinVarsat";
    this->pret=p;
    this->tip=t;
    this->volum=vol;
    t.clear();
}

void VinVarsat::afisare(ostream &out) const
{
    out<<nume<<" "<<tip<<" "<<pret<<" "<<volum;
}

int VinVarsat::Getpret()
{
    return this->pret;
}

int VinVarsat::Getvolum()
{
    return this->volum;
}

string VinVarsat::Gettip()
{
    return tip;
}

void VinVarsat::Setvolum(int vol)
{
    this->volum-=vol;
}
