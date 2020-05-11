#include "Jucarie.h"

Jucarie::Jucarie(const Jucarie&j)
{
    this->nume=j.nume;
    this->pret=j.pret;
    this->toy=j.toy;
}

Jucarie& Jucarie::operator=(const Jucarie &j)
{
    this->nume=j.nume;
    this->pret=j.pret;
    this->toy=j.toy;
    return *this;
}

void Jucarie::citire(istream&in)
{
    int p;
    string t;
    cout<<"Ce jucarie?\n";
    in>>t;
    cout<<"Care este pretul acestei jucarii?\n";
    in>>p;
    this->pret=p;
    this->nume="Jucarie";
    this->toy=t;
}

void Jucarie::afisare(ostream &out) const
{
    out<<nume<<" "<<toy<<" "<<pret;
}

int Jucarie::Getpret()
{
    return this->pret;
}

string Jucarie::Gettoy()
{
    return toy;
}

