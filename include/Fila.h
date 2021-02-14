#include <stdio.h>

#ifndef FILA_H
#define FILA_H

using namespace std;

class Fila {
    private:
        int frente;
        int tras;
        static const int MAXTAM = 100;
        string comandos[MAXTAM]; 
        int tamanho;
    public:
        Fila();
        ~Fila();
        void Enfileira(string);
        string Desenfileira();
        void InserePrioritario(string);
        void Imprime();
        void Limpa();
    friend class Robos;
};

#endif