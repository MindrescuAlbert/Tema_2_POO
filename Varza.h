#ifndef VARZA_H
#define VARZA_H

#include <iostream>
#include <string>
#include <vector>
#include "produs.h"

using namespace std;

class Varza: public produs
{
    int bucati;

public:
    Varza(): produs()
    {
        bucati=0;
    };
    Varza(int buc,int p): produs(p,"Varza")
    {
        bucati=buc;
    };
    Varza(const Varza &a);
    Varza& operator=(const Varza &a);
    ~Varza()
    {
        nume.clear();
    };
    void afisare(ostream &out) const;
    void citire(istream &in);
    int Get();
    int Getpret();
    void Set(int buc);
    string Gettip() {};
};


#endif // VARZA_H
