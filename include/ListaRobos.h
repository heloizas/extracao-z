#include <stdio.h>
#include "Robos.h"

#ifndef LISTAROBOS_H
#define LISTAROBOS_H

using namespace std;

class ListaRobos {
    private:
    // 50 robôs
        Robos* robos[50];
    public:
        ListaRobos();
        ~ListaRobos();
        void imprimirRelatorio(int); 
        void recebeOrdem();
};

#endif