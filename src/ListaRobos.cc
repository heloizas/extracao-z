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
};
 
bool ListaRobos::ativarRobo(int idRobo) {
    return robos[idRobo]->ativarRobo() ? true : false;
}

// void ListaRobos::retornarRobo(int idRobo) {
    
// }

void ListaRobos::relatorioRobo(int idRobo) {
    robos[idRobo]->imprimirRelatorio();
};

// To-do: Remover
// void ListaRobos::imprimirRelatorio() {
//     // To-do Colocar outro id
//     int idRobo = 0;
//     robos[idRobo]->imprimirRelatorio();
// }

// void ListaRobos::imprimirFila() {
//     // To-do Colocar outro id
//     int idRobo = 0;
//     robos[idRobo]->imprimirFila();
// } 

ListaRobos::~ListaRobos() {

}