#include "ArregloDinamico.h"

ArregloDinamico::ArregloDinamico()
{
    ad = new int[MAX];
    cont = 0;
    tamaño = MAX;
}

ArregloDinamico::~ArregloDinamico()
{
    delete[] ad;
}



void ArregloDinamico::insertar_final(const string &s)
{
    if (cont==tamaño){
        expandir();
    }
    int t;
    t = stoi(s);
    ad[cont] = t;
    cont ++;
}

void ArregloDinamico::expandir()
{
    int *nv = new int[tamaño+MAX];
    for(size_t i=0;i <cont; i++){
        nv[i] = ad[i];
    }
    delete[] ad;
    ad = nv;
    tamaño = tamaño + MAX;
}