#ifndef STOC_H
#define STOC_H

#include <iostream>
#include <string>
#include <vector>
#include "produs.h"
#include "Varza.h"
#include "Bere.h"
#include "Cartofi.h"
#include "Faina.h"
#include "VinVarsat.h"
#include "Vindesoi.h"
#include "Jucarie.h"

using namespace std;

class stoc
{
    int nrproduse;
    vector<produs*>prod;
    static stoc* instance;
    stoc() {};

public:
    int Getnrprod();
    vector<produs*> Getvector();
    ~stoc();
    friend istream& operator>>(istream &in,stoc &a);
    static stoc* getinstance();
};

#endif // STOC_H
