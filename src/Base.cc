#include <iostream>
#include <fstream>

#include "../include/Base.h"
#include "../include/ListaRobos.h"
#include "../include/Mapa.h"

using namespace std;

Base::Base(ifstream &arquivoMapa) {
  mapa = new Mapa(arquivoMapa);
  totalAliens: 0;
  recursosColetados: 0; 
  robos = new ListaRobos;
}

void Base::relatorioGeral() {
  cout << "BASE: TOTAL DE ALIENS " << totalAliens << " RECURSOS " << recursosColetados << endl;
} 

void Base::adicionarComando(int idRobo, string comando) {
  robos->adicionarComando(idRobo, comando); 
}

void Base::adicionarComandoPrioritario(int idRobo, string comando) {
  robos->adicionarComandoPrioritario(idRobo, comando); 
}

// void Base::executarRobo(int idRobo) {
    
// }

void Base::ativarRobo(int idRobo) {
  if(robos->ativarRobo(idRobo)) {
    std::cout << "BASE: ROBO " << idRobo << " JA ESTA EM MISSAO" << std::endl;
    return;
  }
  cout << "BASE: ROBO "<< idRobo <<" SAIU EM MISSAO" << endl;
}

// void Base::retornarRobo(int idRobo) {
    
// }

void Base::relatorioRobo(int idRobo) {
  robos->relatorioRobo(idRobo); 
}

Base::~Base() {

}
