#include <iostream>
#include <fstream>

#include "../include/Fila.h"

using namespace std;

Fila::Fila(){
    frente = 0;
    tras = 0;
    tamanho = 0;
}

void Fila::Enfileira(string item) {
    itens[tras] = item;
    tras = (tras + 1) % MAXTAM;
    tamanho++;
}

string Fila::Desenfileira() {
    string aux;
    aux = itens[frente];
    frente = (frente + 1) % MAXTAM;
    tamanho--;
    return aux;
}

void Fila::Imprime() {
    for (int i = 0; i<tamanho; i++) {
        cout << itens[i] << endl;
    }
}

Fila::~Fila() {

}