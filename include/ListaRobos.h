#include <stdio.h>
#include "Robos.h"
#include "Mapa.h"

#ifndef LISTAROBOS_H
#define LISTAROBOS_H

using namespace std;

class ListaRobos {
    private:
    // 50 robôs
        Robos* robos[50];
    public:
        ListaRobos();
        ~ListaRobos(); 
        void adicionarComando(int, string);
        void adicionarComandoPrioritario(int, string);

        // To-do: colocar ID
        void executarRobo(int, Mapa&);
        void ativarRobo(int);
        // bool ativarRobo(int);
        bool roboAtivo(int); 
        void retornarRobo(int);
        void relatorioRobo(int);
        int qtdRecursos(int);
        int qtdInimigos(int);
        // void imprimirRelatorio();
};

#endif