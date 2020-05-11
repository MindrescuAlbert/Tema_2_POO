#include "Vindesoi.h"

Vindesoi::Vindesoi(const Vindesoi &v)
{
    pret=v.pret;
    nume=v.nume;
    sticle=v.sticle;
    tip=v.tip;
    an=v.an;
    furnizor=v.furnizor;
    tara=v.tara;
}

Vindesoi& Vindesoi::operator=(const Vindesoi &v)
{
    pret=v.pret;
    nume=v.nume;
    sticle=v.sticle;
    tip=v.tip;
    an=v.an;
    furnizor=v.furnizor;
    tara=v.tara;
    return *this;
}

void Vindesoi::citire(istream &in)
{
    int p,st,ann;
    string furnizz,taraa;
    string t;
// in>>p>>st>>ann;
    cout<<"Ce tip de vin?(RosuSec/AlbDulce/RouseDulce)?\n";
    in>>t;
    cout<<"Ce producator?\n";
    in>>furnizz;
    cout<<"Din ce tara?\n";
    in>>taraa;
    cout<<"Din ce an?";
    in>>ann;
    cout<<"Cate sticle?\n";
    in>>st;
    cout<<"Care este pretul unei sticle?\n";
    in>>p;
    this->nume="Vindesoi";
    this->pret=p;
    this->an=ann;
    this->tip=t;
    this->sticle=st;
    this->furnizor=furnizz;
    this->tara=taraa;
    t.clear();
}

void Vindesoi::afisare(ostream &out) const
{
    out<<nume<<" "<<tip<<" "<<furnizor<<" "<<tara<<" "<<an<<" "<<sticle<<" "<<pret;
}

int Vindesoi::Getan()
{
    return an;
}

int Vindesoi::Getpret()
{
    return this->pret;
}

int Vindesoi::Getsticle()
{
    return this->sticle;
}

string Vindesoi::Getfurnizor()
{
    return this->furnizor;
}

string Vindesoi::Gettara()
{
    return this->tara;
}

string Vindesoi::Gettip()
{
    return this->tip;
}

void Vindesoi::Setsticle(int st)
{
    sticle-=st;
}

