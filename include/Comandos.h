#ifndef COMANDOS_H
#define COMANDOS_H

#include <stdio.h>

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
        void imprimirComandos();
        ~Comandos();
    friend class Mapa;
};

#endif