#include "ArregloDinamico.h"

ArregloDinamico::ArregloDinamico()
{
    ad = new string[MAX];
    cont = 0;
    tamo = MAX;
}

ArregloDinamico::~ArregloDinamico()
{
    delete[] ad;
}

void ArregloDinamico::insertar_final(const string &s)
{
    if (cont==tamo){
        expandir();
    }
    ad[cont] = s;
    cont ++;
}

void ArregloDinamico::insertar_inicio(const string &s)
{
    if (cont==tamo){
        expandir();
    }
    for (size_t i=cont; i>0;i--)
    {
        ad[i] = ad[i-1];
    }
    ad[0] = s;
    cont++;
}

size_t ArregloDinamico::size()
{
    return cont;
}

void ArregloDinamico::expandir()
{
    string *nv = new string[tamo+MAX];
    for(size_t i=0;i <cont; i++){
        nv[i] = ad[i];
    }
    delete[] ad;
    ad = nv;
    tamo = tamo + MAX;
}