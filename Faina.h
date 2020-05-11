#ifndef FAINA_H
#define FAINA_H

#include <iostream>
#include <string>
#include <vector>
#include "produs.h"

using namespace std;

class Faina: public produs
{
    int kilos;
    int calitate;
public:
    Faina(): produs()
    {
        kilos=0;
        calitate=0;
    };
    Faina(int bl,int br,int p): produs(p,"Faina")
    {
        kilos=bl;
        calitate=br;
    };
    Faina(const Faina &a);
    Faina& operator=(const Faina &a);
    ~Faina()
    {
        nume.clear();
    };
    int Getpret();
    int Getkilos();
    int Getcalitate();
    void Setkilos(int kg);
    void afisare(ostream &out) const;
    void citire(istream &in);
    string Gettip() {};
};


#endif // FAINA_H
