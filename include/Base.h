#include <stdio.h>
#include "ListaRobos.h"

#ifndef BASE_H
#define BASE_H

using namespace std;

class Base {
    private:
        ListaRobos* robos; 
        int totalAliens, recursosColetados;
        void relatorioGeral();
    public:
        Base();
        ~Base();
    friend class Mapa;
};

#endif