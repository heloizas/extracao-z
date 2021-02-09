#include <iostream>
#include <fstream>

#include "../include/ListaRobos.h"
#include "../include/Robos.h"

using namespace std;

ListaRobos::ListaRobos() {
    for (int i=0; i<50; i++) {
        robos[i] = new Robos;
    }
    // recebeOrdem();
}

// void ListaRobos::recebeOrdem() {
//     for (int i=0; i<50; i++) {
//         robos[i]->qtdInimigosEliminados = i;
//     }
// } 

void ListaRobos::imprimirRelatorio(int id) {
    robos[id]->imprimirRelatorio();
} 

void ListaRobos::adicionarOrdemComando(int id, string comando) {
    robos[id]->adicionarOrdemComando(id, comando); 
    robos[0]->imprimirFila();
}

ListaRobos::~ListaRobos() {

}