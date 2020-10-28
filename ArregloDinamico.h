#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H
#include <iostream>

using namespace std;

class ArregloDinamico
{
    int *ad ;
    size_t tamo;
    size_t cont;
    const static size_t MAX = 10;

public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(const string &s);
    void insertar_inicio(const string &s);
    size_t size();
    int operator[](size_t a)
    {
        return ad[a];
    }
private:
    void expandir();
};


#endif