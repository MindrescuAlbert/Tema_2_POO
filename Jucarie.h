#ifndef JUCARIE_H
#define JUCARIE_H

#include <iostream>
#include <string>
#include <vector>
#include "produs.h"

using namespace std;

class Jucarie: public produs
{
    string toy;
public:

    Jucarie() : produs()
    {
        toy.clear();
    }
    Jucarie(int p,string t) :produs(p,"Jucarie")
    {
        toy=t;
    };
    Jucarie(const Jucarie &j);
    ~Jucarie()
    {
        nume.clear();
        toy.clear();
    }
    Jucarie& operator=(const Jucarie &j);

    int Getpret();
    string Gettoy();
    void citire(istream& in);
    void afisare(ostream &out) const;
    string Gettip() {};
};


#endif // JUCARIE_H
