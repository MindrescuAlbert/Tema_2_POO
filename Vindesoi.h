#ifndef VINDESOI_H
#define VINDESOI_H

#include <iostream>
#include <string>
#include <vector>
#include "produs.h"

using namespace std;

class Vindesoi: public produs
{
    int sticle;
    int an;
    string tip;
    string furnizor;
    string tara;
public:
    Vindesoi() : produs()
    {
        sticle=0;
        tip.clear();
        furnizor.clear();
    };
    Vindesoi(int p,int st,int ann,string tipp,string furniz,string taraa) :produs(p,"Vindesoi")
    {
        sticle=st;
        tip=tipp;
        an=ann;
        furnizor=furniz;
        tara=tara;
    };
    Vindesoi(const Vindesoi &v);
    ~Vindesoi()
    {
        nume.clear();
        tip.clear();
        furnizor.clear();
        tara.clear();
    };
    Vindesoi& operator=(const Vindesoi &v);
    int Getpret();
    int Getsticle();
    int Getan();
    string Gettip();
    string Getfurnizor();
    string Gettara();
    void Setsticle(int st);
    void citire(istream &in);
    void afisare(ostream &out) const;
    //string Gettip(){};
};

#endif // VINDESOI_H
