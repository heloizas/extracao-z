#include <iostream>
#include <fstream>

#include "../include/Robos.h"
#include "../include/Fila.h"

using namespace std;

Robos::Robos() {
    ativo: false;
    posicaoX: 0;
    posicaoY: 0;
    qtdInimigosEliminados: 0;
    qtdRecursosColetados: 0;
    // To-do: Mudar para quantidade de comandos
    filaOrdemComandos[0] = new Fila;
}
 
void Robos::adicionarOrdemComando(string comando) { 
    filaOrdemComandos[0]->Enfileira(comando);
} 

void Robos::imprimirRelatorio() {
    cout << "Relatorio";
}

void Robos::imprimirFila() {
    filaOrdemComandos[0]->Imprime();
}

Robos::~Robos() {

}