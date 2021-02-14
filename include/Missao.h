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
        Base* base; 
        Comandos* comandos;
    public:
        Missao(ifstream &arquivoMapa, ifstream &arquivoComandos);
        ~Missao();
        inline void relatorioGeral() const {base->relatorioGeral();}
};

#endif