#include <stdio.h>

#ifndef FILA_H
#define FILA_H

using namespace std;

class Fila {
    public:
        Fila();
        void Enfileira(string);
        string Desenfileira();
        void Imprime();
        ~Fila();
    private:
        int frente;
        int tras;
        static const int MAXTAM = 100;
        string itens[MAXTAM];
        int tamanho;
};

#endif