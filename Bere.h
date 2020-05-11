#ifndef BERE_H
#define BERE_H

#include <iostream>
#include <string>
#include <vector>
#include "produs.h"

using namespace std;

class Bere: public produs
{
    int blonda;
    int bruna;
    string tip;
public:
    Bere(): produs()
    {
        blonda=0;
        bruna=0;
    };
    Bere(int bl,int br,int p,string tipp): produs(p,"Bere")
    {
        blonda=bl;
        bruna=br;
        tip=tipp;
    };
    Bere(const Bere &a);
    Bere& operator=(const Bere &a);
    ~Bere()
    {
        nume.clear();
    };
    void afisare(ostream &out) const;
    void citire(istream &in);
    int Getblonda();
    int Getbruna();
    int Getpret();
    string Gettip();
    void Set(int bl, int br);
};


#endif // BERE_H
