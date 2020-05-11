#ifndef VINVARSAT_H
#define VINVARSAT_H

#include <iostream>
#include <string>
#include <vector>
#include "produs.h"

using namespace std;

class VinVarsat: public produs
{
    int volum;
    string tip;

public:
    VinVarsat() : produs()
    {
        volum=0;
        tip.clear();
    };
    VinVarsat(int p,int vol,string tipp) :produs(p,"VinVarsat")
    {
        volum=vol;
        tip=tipp;
    }
    VinVarsat(const VinVarsat &v);
    VinVarsat& operator=(const VinVarsat &v);
    ~VinVarsat()
    {
        nume.clear();
        tip.clear();
    }
    int Getpret();
    int Getvolum();
    string Gettip();
    void Setvolum(int vol);
    void citire(istream &in);
    void afisare(ostream &out) const;

};


#endif // VINVARSAT_H
