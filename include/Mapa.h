#include <stdio.h>
#include <string>
#include "Base.h"
#include "Comandos.h"

#ifndef MAPA_H
#define MAPA_H

using namespace std;

 
class Mapa {
    private:
        Base* base; 
        Comandos* comandos;
        char mapaBase, recurso, obstaculo, inimigo, vazio;
        int linhas, colunas;
        static const int MAXTAM = 100;
        char mapaMatriz[MAXTAM][MAXTAM];
        void gerarMapa(ifstream &arquivoMapa);
    public:
        Mapa(ifstream &arquivoMapa, ifstream &arquivoComandos);
        void encontrarPonto(int, int);
        void imprimirMapa();
        ~Mapa();
        inline void imprimirComandos() const {comandos->imprimirComandos();}
        inline void relatorioGeral() const {base->relatorioGeral();}
};

#endif