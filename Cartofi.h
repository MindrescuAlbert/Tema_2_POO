#ifndef CARTOFI_H
#define CARTOFI_H

#include <iostream>
#include <string>
#include <vector>
#include "produs.h"

using namespace std;

class Cartofi: public produs
{
    int albi;
    int rosii;
public:
    Cartofi(): produs()
    {
        albi=0;
        rosii=0;
    };
    Cartofi(int bl,int br,int p): produs(p,"Cartofi")
    {
        albi=bl;
        rosii=br;
    };
    Cartofi(const Cartofi &a);
    Cartofi& operator=(const Cartofi &a);
    ~Cartofi()
    {
        nume.clear();
    };
    int Getalbi();
    int Getrosii();
    int Getpret();
    void Setcartofi(int a,int r);
    void afisare(ostream &out) const;
    void citire(istream &in);
    string Gettip() {};
};


#endif // CARTOFI_H
