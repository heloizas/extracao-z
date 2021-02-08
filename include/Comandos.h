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
        int tipo;
        int idRobo;
        int coordenadaX;
        int coordenadaY;
        void furaFila();
        void gerarComandos(ifstream &arquivoComandos);
        void executarComando(string);
        void executarComandoDireto(string);
        void executarComandoOrdem(string);
        int tipoComando(string);
        void comandoMover(string);
        void comandoColetar(string);
        void comandoEliminar(string);
        void comandoAtivar(string);
        void comandoExecutar(string);
        void comandoRelatorio(string);
        void comandoRetornar(string);
    public:
        Comandos(ifstream &arquivoComandos);
        ~Comandos();
        void imprimirComandos();
    friend class Mapa;
};

#endif