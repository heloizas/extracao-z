#include <iostream>
#include <fstream>

#include "../include/Robos.h"

using namespace std;

Robos::Robos() {
    ativo: false;
    posicaoX: 0;
    posicaoY: 0;
    qtdInimigosEliminados: 0;
    qtdRecursosColetados: 0;
}

Robos::~Robos() {

}

void Robos::imprimirRelatorio() {
    cout << "Relatorio";
}
