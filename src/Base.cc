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


void Base::adicionarOrdemComando(int id, string comando) {
  robos->adicionarOrdemComando(id, comando); 
}

void Base::relatorioGeral() {
    cout << "BASE: TOTAL DE ALIENS " << totalAliens << " RECURSOS " << recursosColetados << endl;
} 

Base::~Base() {

}
