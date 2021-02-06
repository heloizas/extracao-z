#ifndef MAPA_H
#define MAPA_H

#include <stdio.h>

using namespace std;
 
class Mapa {
    private:
        int aliens, recursos, linhas, colunas;
        static const int MAXTAM = 100;
        char mapaMatriz[MAXTAM][MAXTAM];
    public:
        Mapa(ifstream &arquivoMapa);
        void imprimirMapa();
        ~Mapa();
};

#endif