#include <stdio.h>
#include <string>

#ifndef MAPA_H
#define MAPA_H

using namespace std;

class Mapa {
    private:
        char mapaBase, recurso, obstaculo, inimigo, vazio;
        int linhas, colunas;
        static const int MAXTAM = 100;
        char mapaMatriz[MAXTAM][MAXTAM];
        void gerarMapa(ifstream &arquivoMapa);
    public:
        Mapa(ifstream &arquivoMapa);
        void encontrarPonto(int, int);
        void imprimirMapa();
        ~Mapa();
        // inline void imprimirComandos() const {comandos->imprimirComandos();}
        // inline void relatorioGeral() const {base->relatorioGeral();}
        // inline void imprimirFila() const {base->imprimirFila();}
        // inline void imprimirRelatorio() const {base->imprimirRelatorio();}
};

#endif