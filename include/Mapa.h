#ifndef MAPA_H
#define MAPA_H

#include <stdio.h>

using namespace std;

class Mapa {
    public:
        Mapa(ifstream &arquivoMapa);
        void imprimirMapa();
        ~Mapa();
    private:
        int linhas;
        int colunas;
        static const int MAXTAM = 100;
        char mapaMatriz[MAXTAM][MAXTAM];
};

#endif