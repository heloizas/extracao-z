#include <iostream>
#include <fstream>

#include "../include/ListaRobos.h"
#include "../include/Robos.h"
#include "../include/Mapa.h"

using namespace std;

ListaRobos::ListaRobos() {
    for (int i=0; i<50; i++) {
        robos[i] = new Robos(i);
    }
}

void ListaRobos::adicionarComando(int idRobo, string comando) {
    robos[idRobo]->adicionarComando(comando);  
}

void ListaRobos::adicionarComandoPrioritario(int idRobo, string comando) {
    robos[idRobo]->adicionarComandoPrioritario(comando);  
}

void ListaRobos::executarRobo(int idRobo, Mapa& mapa) {
    robos[idRobo]->executarRobo(mapa);
}
 
void ListaRobos::ativarRobo(int idRobo) {
    robos[idRobo]->ativarRobo(); 
}

// bool ListaRobos::ativarRobo(int idRobo) {
//     robos[idRobo]->ativarRobo() ? true : false; 
// }

bool ListaRobos::roboAtivo(int idRobo) {
    return robos[idRobo]->roboAtivo();
}

int ListaRobos::qtdRecursos(int idRobo) {
    return robos[idRobo]->qtdRecursos();
}

int ListaRobos::qtdInimigos(int idRobo) {
    return robos[idRobo]->qtdInimigos();
}

void ListaRobos::retornarRobo(int idRobo) {
    robos[idRobo]->retornarBase();
};


void ListaRobos::relatorioRobo(int idRobo) {
    robos[idRobo]->imprimirRelatorio();
};

ListaRobos::~ListaRobos() {

}