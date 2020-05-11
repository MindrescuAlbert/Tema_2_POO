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
#include "stoc.h"

using namespace std;


int main()
{
    stoc *s=stoc::getinstance();
    cin>>(*s);

    int nr,plata=0;
    int nr_clienti;
    cout<<"Cati clienti?\n";
    cin>>nr_clienti;
    int profittotal=0;
    for(int k=1; k<=nr_clienti; k++)
    {
        plata=0;
        cout<<"\n\n\n\n  Buna ziua, care este comanda dumneavoastra ? \n\n\n\n";

        cout<<"Cate produse doriti sa comandati?";
        cin>>nr;
        cout<<"Ce produse?( Varza / Bere / Cartofi / Faina / Jucarie / VinVarsat / Vindesoi )\n";
        try
        {
            for(int i=1; i<=nr; i++)
            {
                string ss;
                cin>>ss;
                produs *p;
                if(ss=="Varza")
                {
                    int buc;

//          cin>>buc;
                    int actbuc;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        Varza *v=dynamic_cast<Varza*>((*s).Getvector()[j]);
                        if(v!=NULL)
                        {
                            actbuc=(*v).Get();
                            break;
                        }

                    }
                    cout<<"Cate bucati de varza doriti? Avem disponibile "<<actbuc<<" bucati";
                    cin>>buc;
                    int ok=0;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        Varza *v=dynamic_cast<Varza*>((*s).Getvector()[j]);
                        if(v!=NULL)
                        {
                            if(buc<=(*v).Get())
                            {
                                (*v).Set(buc);
                                plata+=(*v).Getpret()*buc;
                                ok=1;
                            }
                            else
                                throw 0;
                        }
                    }
                    if(ok==0)
                        throw 0;
                }

                else if(ss=="Bere")
                {
                    int bl,br;
                    string t;
                    cout<<"Ce bere doriti?\n";
                    cin>>t;
                    int actbl,actbr;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        Bere *v=dynamic_cast<Bere*>((*s).Getvector()[j]);
                        if(v!=NULL&&t==(*v).Gettip())
                        {
                            actbr=(*v).Getbruna();
                            actbl=(*v).Getblonda();
                            break;
                        }

                    }
                    // cout<<"Cate bucati de varza doriti? Avem disponibile "<<actbuc<<" bucati";

                    cout<<"Cate sticle de bere "<<t<<" blonda si bruna doriti doriti?Avem disponibilie "<<actbl<<" si "<<actbr<<" sticle";
                    cin>>bl>>br;
                    int ok=0;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        Bere *v=dynamic_cast<Bere*>((*s).Getvector()[j]);
                        if(v!=NULL)
                        {
                            //  v=((*s).Getvector()[j]);
                            // p=((*s).Getvector()[j]);
                            //   cout<<p->Getpret();
                            if(v->Gettip()==t)
                                cout<<1;

                            if(bl<=(*v).Getblonda()&&br<=(*v).Getbruna())
                            {
                                (*v).Set(bl,br);
                                plata+=(*v).Getpret()*(bl+br);
                                ok=1;
                            }
                            else
                                throw 0;
                        }
                    }
                    if(ok==0)
                        throw 0;
                }

                else if(ss=="Cartofi")
                {
                    int albi,rosii;
                    cout<<"Cati cartofi albi si cati cartofi rosii doriti?\n";
                    cin>>albi>>rosii;
                    int ok=0;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        Cartofi *v=dynamic_cast<Cartofi*>((*s).Getvector()[j]);
                        if(v!=NULL)
                        {
                            if(albi<=(*v).Getalbi()&&rosii<=(*v).Getrosii())
                            {
                                (*v).Setcartofi(albi,rosii);
                                plata+=(*v).Getpret()*(albi+rosii);
                                ok=1;
                            }
                            else
                                throw 0;
                        }
                    }
                    if(ok==0)
                        throw 0;
                }

                else if(ss=="Faina")
                {
                    int kg,calitate;
                    cout<<"Cate kilograme de faina doriti ?\n";
                    cin>>kg;
                    cout<<"Ce calitate de faina doriti?\n";
                    cin>>calitate;
                    int ok=0;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        Faina *v=dynamic_cast<Faina*>((*s).Getvector()[j]);
                        if(v!=NULL)
                        {
                            if((*v).Getcalitate()==calitate)
                                if(kg<=(*v).Getkilos())
                                {
                                    (*v).Setkilos(kg);
                                    plata+=(*v).Getpret()*kg;
                                    ok=1;
                                }
                                else
                                    throw 0;
                        }
                    }
                    if(ok==0)
                        throw 0;
                }

                else if(ss=="Jucarie")
                {
                    string toy;
                    cout<<"Ce jucarie doriti?\n";
                    cin>>toy;
                    int ok=0;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        Jucarie *v=dynamic_cast<Jucarie*>((*s).Getvector()[j]);
                        if(v!=NULL)
                        {
                            if(toy==(*v).Gettoy())
                            {
                                plata+=(*v).Getpret();
                                ok=1;
                            }
                            else
                                throw 0;
                        }
                    }
                    if(ok==0)
                        throw 0;
                }

                else if(ss=="VinVarsat")
                {
                    string tip;
                    int vol;

                    cout<<"De care vin doriti?\n";
                    cin>>tip;

                    int voll;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        VinVarsat *v=dynamic_cast<VinVarsat*>((*s).Getvector()[j]);
                        if(v!=NULL&&tip==(*v).Gettip())
                        {
                            voll=(*v).Getvolum();
                            break;
                        }

                    }



                    cout<<"Cati litri de vin "<<tip<<" doriti? Avem disponibili "<<voll;
                    cin>>vol;
                    int ok=0;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        VinVarsat* v=dynamic_cast<VinVarsat*>((*s).Getvector()[j]);
                        if(v!=NULL)
                        {
                            if((*v).Gettip()==tip)
                                if(vol<=(*v).Getvolum())
                                {
                                    (*v).Setvolum(vol);
                                    plata+=vol*(*v).Getpret();
                                    ok=1;
                                }
                                else
                                    throw 0;
                        }
                    }
                    if(ok==0)
                        throw 0;
                }

                else if(ss=="Vindesoi")
                {
                    int sticle;
                    int an;
                    string tip;
                    string furnizor;
                    string tara;

                    cout<<"De care vin doriti?(RosuSec/AlbDulce/RouseDulce)\n";
                    cin>>tip;
                    cout<<"Din ce tara sa fie?\n";
                    cin>>tara;
                    cout<<"De la ce Crama?\n";
                    cin>>furnizor;
                    cout<<"Din ce an doriti sa fie sticla?\n";
                    cin>>an;
                    cout<<"Cate sticle de acest tip doriti?\n";
                    cin>>sticle;
                    int ok=0;
                    for(int j=0; j<(*s).Getnrprod(); j++)
                    {
                        Vindesoi* v=dynamic_cast<Vindesoi*>((*s).Getvector()[j]);
                        if(v!=NULL)
                        {
                            if((*v).Gettip()==tip&&(*v).Getfurnizor()==furnizor&&(*v).Getan()==an&&(*v).Gettara()==tara)
                                if(sticle<=(*v).Getsticle())
                                {
                                    (*v).Setsticle(sticle);
                                    plata+=((*v).Getpret())*sticle;
                                    ok=1;
                                }
                                else
                                    throw 0;
                        }
                    }
                    if(ok==0)
                        throw 0;
                }
                if(i!=nr)
                    cout<<"\nCare este urmatorul produs\n";
                if(i==nr)
                    throw 1;
            }
        }
        catch(int a)
        {
            if(a==0)
            {
                cout<<"\n\n\n    NE PARE RAU, NU AVEM DESTULE PRODUSE IN STOC      ";
            }
            if(a==1)
            {
                profittotal+=plata;
                cout<<"\n\n\n\n         Comanda dumneavoastra insumeaza "<<plata<<" lei.\n         POFTA MARE";
            }

        }

    }
    cout<<"Magazinul a realizat un profit de "<<profittotal<<" lei";
    return 0;
}
