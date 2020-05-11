#include "Bere.h"

Bere::Bere(const Bere &a)
{
    pret=a.pret;
    blonda=a.blonda;
    bruna=a.bruna;
    nume=a.nume;
    tip=a.tip;
}

Bere& Bere::operator=(const Bere &a)
{
    nume.clear();
    blonda=a.blonda;
    bruna=a.bruna;
    pret=a.pret;
    tip=a.tip;
    return *this;
}

void Bere::citire(istream &in)
{
    nume.clear();
    int bl,br,p;
    string tipp;
    cout<<"Care este pretul unei beri?\n";
    in>>p;
    cout<<"Ce tip de bere?\n";
    in>>tipp;
    cout<<"Cata bere "<<tipp<<" blonda si cata bruna?\n";
    in>>bl>>br;
    this->pret=p;
    this->blonda=bl;
    this->bruna=br;
    this->tip=tipp;
    this->nume="Bere";
    tipp.clear();
}

void Bere::afisare(ostream &out) const
{
    out<<nume<<" "<<pret<<" "<<tip<<" "<<blonda<<" "<<bruna<<"\n";
}

int Bere::Getblonda()
{
    return this->blonda;
}

int Bere::Getbruna()
{
    return this->bruna;
}

string Bere::Gettip()
{
    return tip;
}

int Bere::Getpret()
{
    return this->pret;
}

void Bere::Set(int bl,int br)
{
    blonda-=bl;
    bruna-=br;
}
