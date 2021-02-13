#include <stdio.h>
#include "Mapa.h"
#include "ListaRobos.h"

#ifndef BASE_H
#define BASE_H

using namespace std;

class Base {
    private:
        Mapa* mapa;
        ListaRobos* robos; 
        int totalAliens, recursosColetados;
        void relatorioGeral();
    public:
        Base(ifstream &arquivoMapa);
        ~Base();
        void adicionarComando(int, string);
        void adicionarComandoPrioritario(int, string);
        void executarRobo(int); 
        void ativarRobo(int);
        void retornarRobo(int);
        void relatorioRobo(int);
    friend class Mapa;
};

#endif