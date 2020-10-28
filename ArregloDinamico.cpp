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