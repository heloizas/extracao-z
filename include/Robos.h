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
        int qtdInimigosEliminados;
        int qtdRecursosColetados;
        Fila* filaComandos[1];
        Fila* filaHistorico[1];
    public:
        Robos();
        ~Robos();
        void imprimirRelatorio();
        void imprimirFila();
        void adicionarComando(string);
        void adicionarComandoPrioritario(string);
        bool ativarRobo();

    friend class ListaRobos;
};

#endif