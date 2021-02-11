#include <stdio.h>

#ifndef FILA_H
#define FILA_H

using namespace std;

class Fila {
    public:
        Fila();
        void Enfileira(string);
        void InserePrioritario(string);
        string Desenfileira();
        void Imprime();
        ~Fila();
    private:
        int frente;
        int tras;
        static const int MAXTAM = 100;
        string comandos[MAXTAM];
        int tamanho;
};

#endif