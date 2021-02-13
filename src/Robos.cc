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
    filaComandos[0] = new Fila;
    filaHistorico[0] = new Fila;
}
 
bool Robos::ativarRobo() {
  ativo = true;
  return ativo;
}

void Robos::adicionarComando(string comando) { 
    filaComandos[0]->Enfileira(comando);
} 

void Robos::adicionarComandoPrioritario(string comando) { 
    filaComandos[0]->InserePrioritario(comando);
} 

void Robos::imprimirRelatorio() {
    filaHistorico[0]->Imprime();
}

void Robos::imprimirFila() {
    filaComandos[0]->Imprime();
}

Robos::~Robos() {

}