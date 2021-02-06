#ifndef ROBOS_H
#define ROBOS_H

#include <stdio.h>

using namespace std;

class Robos {
    public:
        Robos();
        ~Robos();
    private:
        int fila;
        int historico;
        int qtdIinimigosEliminados;
        int qtdRecursosColetados;
};

#endif