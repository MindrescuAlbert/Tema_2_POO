#ifndef PRODUS_H
#define PRODUS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class produs
{
protected:

    int pret;
    string nume;

public:

    produs();
    produs(int p,string s);
    produs(const produs &a);
    virtual ~produs();
    friend istream& operator>>(istream&in, produs &a);
    friend ostream& operator<<(ostream &out,const produs &a);
    virtual void citire(istream &in)=0;
    virtual void afisare(ostream &out)const =0;
    virtual int Getpret()=0;
    virtual string Gettip()=0;
};

#endif // PRODUS_H
