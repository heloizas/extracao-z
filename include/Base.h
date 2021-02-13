#include <stdio.h>
#include "ListaRobos.h"

#ifndef BASE_H
#define BASE_H

using namespace std;

class Base {
    private:
        ListaRobos* robos; 
        int totalAliens, recursosColetados;
        void relatorioGeral();
    public:
        Base();
        ~Base();
        void adicionarComando(int, string);
        void adicionarComandoPrioritario(int, string);
        void executarRobo(int);
        void ativarRobo(int);
        void retornarRobo(int);
        void relatorioRobo(int);

        // To-do: deletar
        inline void imprimirFila() const {robos->imprimirFila();}
        inline void imprimirRelatorio() const {robos->imprimirRelatorio();}
    friend class Mapa;
};

#endif