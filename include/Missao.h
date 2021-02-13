#include <stdio.h>
#include <string>
#include "Base.h"
#include "Comandos.h"
#include "Mapa.h"

#ifndef MISSAO_H
#define MISSAO_H

using namespace std;

class Missao {
    private:
        Mapa* mapa; 
        Base* base; 
        Comandos* comandos;
    public:
        Missao(ifstream &arquivoMapa, ifstream &arquivoComandos);
        ~Missao();
        // inline void imprimirComandos() const {comandos->imprimirComandos();}
        // inline void relatorioGeral() const {base->relatorioGeral();}
        // inline void imprimirFila() const {base->imprimirFila();}
        // inline void imprimirRelatorio() const {base->imprimirRelatorio();}
};

#endif