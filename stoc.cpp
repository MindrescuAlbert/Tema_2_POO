#include "stoc.h"

int stoc::Getnrprod()
{
    return nrproduse;
}

vector<produs*> stoc::Getvector()
{
    return prod;
}


stoc* stoc::instance=0;

stoc* stoc::getinstance()
{
    if(instance==0)
    {
        instance=new stoc();
    }
    return instance;
}

stoc::~stoc()
{
    prod.clear();
    delete instance;
}

istream& operator>>(istream&in,stoc &a)
{
    cout<<"\n\n\n\n       SA STABILIM STOCUL   \n\n\n\n ";

    cout<<"Cate produse are stocul?\n";
    in>>a.nrproduse;
    string s;
    produs*p;
    cout<<"Ce produse?( Varza / Bere / Cartofi / Faina / Jucarie / VinVarsat / Vindesoi )\n";
    for(int i=1; i<=a.nrproduse; i++)
    {
        cin>>s;
        if(s=="Varza")
        {
            Varza* v=new Varza;
            cin>>(*v);
            // produs *p=&v;
            p=v;
            a.prod.push_back(p);
        }
        else if(s=="Bere")
        {
            Bere*b=new Bere;
            cin>>(*b);
            // produs*p=&b;
            p=b;
            a.prod.push_back(p);
        }
        else if(s=="Cartofi")
        {
            Cartofi* b=new Cartofi;
            cin>>(*b);
            //  produs*p=&b;
            p=b;
            a.prod.push_back(p);
        }
        else if(s=="Faina")
        {
            Faina* b=new Faina;
            cin>>(*b);
            // produs*p=&b;
            p=b;
            a.prod.push_back(p);
        }
        else if(s=="Jucarie")
        {
            Jucarie*b=new Jucarie;
            cin>>(*b);
            //  produs *p=&b;
            p=b;
            a.prod.push_back(p);
        }
        else if(s=="VinVarsat")
        {
            VinVarsat*b=new VinVarsat;
            cin>>(*b);
            // produs *p=&b;
            p=b;
            a.prod.push_back(p);
        }
        else if(s=="Vindesoi")
        {
            Vindesoi*b=new Vindesoi;
            cin>>(*b);
            //  produs *p=&b;
            p=b;
            a.prod.push_back(p);
        }
        if(i!=a.nrproduse)
            cout<<"Urmatorul produs\n";
    }
    return in;
}

