#include <iostream>
#include <fstream>

#include "../include/Base.h"
#include "../include/ListaRobos.h"

using namespace std;

Base::Base() {
    totalAliens: 0;
    recursosColetados: 0; 
    robos = new ListaRobos;
}

void Base::adicionarComando(int id, string comando) {
  robos->adicionarComando(id, comando); 
}

void Base::adicionarComandoPrioritario(int id, string comando) {
  robos->adicionarComandoPrioritario(id, comando); 
}

void Base::relatorioGeral() {
    cout << "BASE: TOTAL DE ALIENS " << totalAliens << " RECURSOS " << recursosColetados << endl;
} 

Base::~Base() {

}
