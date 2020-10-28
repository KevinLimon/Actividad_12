#include<iostream>
#include "ArregloDinamico.h"

using namespace std;

int main(){
    ArregloDinamico ad;
    ad.insertar_final("Hola");
    ad.insertar_final("Buenas");
    ad.insertar_final("Noches");
    ad.insertar_final("Adios");
    ad.insertar_inicio("Chocolate");
    ad.insertar_inicio("Paletas");



    return 0;
}