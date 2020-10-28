#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H
#include <iostream>

using namespace std;

class ArregloDinamico
{
    int *ad ;
    size_t tamaño;
    size_t cont;

public:
    ArregloDinamico();
    ~ArregloDinamico();
};


#endif