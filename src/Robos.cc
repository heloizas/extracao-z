#include <iostream>
#include <fstream>

#include "../include/Robos.h"

using namespace std;

Robos::Robos() {
    ativo: false;
    posicaoX: 0;
    posicaoY: 0;
    filaAux = 0;
    qtdInimigosEliminados: 0;
    qtdRecursosColetados: 0;
}

void Robos::adicionarOrdemComando(int id, string comando) {
    fila[filaAux] = comando;
    filaAux++;
}

void Robos::imprimirRelatorio() {
    cout << "Relatorio";
}

void Robos::imprimirFila() {
    for (int i = 0; i<filaAux; i++) {
        cout << fila[i] << endl;
    }
}

Robos::~Robos() {

}