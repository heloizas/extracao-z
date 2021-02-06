#ifndef BASE_H
#define BASE_H

#include <stdio.h>

using namespace std;

class Base {
    public:
        Mapa(ifstream &arquivoMapa);
        void imprimirMapa();
        ~Mapa();
    private:
        int aliens;
        int recursosColetados;
};

#endif