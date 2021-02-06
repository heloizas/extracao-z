#include <stdio.h>

#ifndef COMANDOS_H
#define COMANDOS_H

using namespace std;
 
class Comandos {
    private:
        static const int MAXTAM = 100;
        string comandos[MAXTAM];
        string linhaComando;
        int quantidadeComandos;
        void furaFila();
    public:
        Comandos(ifstream &arquivoComandos);
        ~Comandos();
        void imprimirComandos();
    friend class Mapa;
};

#endif