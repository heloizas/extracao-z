#include <stdio.h>

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
        int filaAux;
        static const int MAXTAM = 100;
        string fila[MAXTAM];
    public:
        Robos();
        ~Robos();
        void imprimirRelatorio();
        void imprimirFila();
        void adicionarOrdemComando(int, string);
    friend class ListaRobos;
};

#endif