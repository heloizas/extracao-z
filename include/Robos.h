#include <stdio.h>

#ifndef ROBOS_H
#define ROBOS_H

using namespace std;

class Robos {
    private:
        bool ativo;
        int posicaoX;
        int posicaoY;
        int fila;
        int historico;
        int qtdInimigosEliminados;
        int qtdRecursosColetados;
    public:
        Robos();
        ~Robos();
        void imprimirRelatorio();
    friend class ListaRobos;
};

#endif