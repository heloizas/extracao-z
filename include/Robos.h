#include <stdio.h>
#include "Fila.h"

#ifndef ROBOS_H
#define ROBOS_H

using namespace std;

class Robos {
    private:
        bool ativo;
        int posicaoX;
        int posicaoY;
        int historico;
        int qtdInimigosEliminados;
        int qtdRecursosColetados;
        Fila* filaOrdemComandos[1];
    public:
        Robos();
        ~Robos();
        void imprimirRelatorio();
        void imprimirFila();
        void adicionarOrdemComando(string);
    friend class ListaRobos;
};

#endif