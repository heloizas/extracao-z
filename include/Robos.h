#include <stdio.h>
#include "Fila.h"
#include "Mapa.h"

#ifndef ROBOS_H
#define ROBOS_H

using namespace std;

class Robos {
    private:
        int idRobo;
        bool ativo;
        string auxHistorico;
        int posicaoX;
        int posicaoY;
        int qtdInimigosEliminados;
        int qtdRecursosColetados;
        Fila* filaComandos[1];
        Fila* filaHistorico[1];
    public:
        Robos(int);
        ~Robos();
        void adicionarComando(string);
        void adicionarComandoPrioritario(string);
        void ativarRobo();
        // bool ativarRobo();
        void comandoMover(string, Mapa& mapa);
        void comandoColetar(Mapa& mapa);
        void comandoEliminar(Mapa& mapa);
        void executarRobo(Mapa& mapa);
        void imprimirRelatorio();
        void processarComando(string, Mapa& mapa);
        bool roboAtivo();
        int qtdRecursos();
        int qtdInimigos();
        void retornarBase();
    friend class ListaRobos;
};

#endif