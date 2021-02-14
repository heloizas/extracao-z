#include <iostream>
#include <fstream>

#include "../include/Fila.h"

using namespace std;

Fila::Fila(){
    frente = 0;
    tras = 0;
    tamanho = 0;
}

void Fila::Enfileira(string comando) {
    comandos[tras] = comando;
    tras = (tras + 1) % MAXTAM;
    tamanho++;
}

string Fila::Desenfileira() {
    string contadorAux;
    contadorAux = comandos[frente];
    frente = (frente + 1) % MAXTAM;
    tamanho--;
    return contadorAux;
}

void Fila::InserePrioritario(string comando) {
    Fila filaAuxiliar;
    string auxX;
    string auxY;
    int contadorAux;
    contadorAux = tamanho;
    int tamanhoFilaAux = 0;
    while (tamanhoFilaAux < contadorAux) {
        auxX = Desenfileira();
        filaAuxiliar.Enfileira(auxX);
        tamanhoFilaAux++;
    }
    Enfileira(comando);
    while (tamanhoFilaAux > 0) {
        auxY = filaAuxiliar.Desenfileira();
        Enfileira(auxY);
        tamanhoFilaAux--;
    }
}

void Fila::Imprime() {
    for (int i = 0; i<tamanho; i++) {
        cout << comandos[i] << endl;
    }
}

void Fila::Limpa() {
    frente = 0;
    tras = 0;
    tamanho = 0;
}

Fila::~Fila() {
}