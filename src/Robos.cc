#include <iostream>
#include <fstream>

#include "../include/Robos.h"
#include "../include/Fila.h"

using namespace std;

Robos::Robos(int id) {
    idRobo = id;
    ativo: false;
    posicaoX: 0;
    posicaoY: 0;
    qtdInimigosEliminados: 0;
    qtdRecursosColetados: 0;
    auxHistorico: " ";
    filaComandos[0] = new Fila;
    filaHistorico[0] = new Fila;
}
 
bool Robos::ativarRobo() {
  bool was_active = ativo;
  ativo = true;
  return was_active;
}

void Robos::executarRobo(Mapa& mapa) {
  int size = filaComandos[0]->tamanho;
  string comando;
  for(int i = 0; i < size; i++) {
    comando = filaComandos[0]->Desenfileira();
    processarComando(comando, mapa);
  }
} 

void Robos::processarComando(string comando, Mapa& mapa){
  if(comando.find("MOVER") != string::npos) {
        comandoMover(comando, mapa);
    } else if(comando.find("COLETAR") != string::npos) {
        // comandoColetar(mapa);
    } else if(comando.find("ELIMINAR") != string::npos) {
        // comandoEliminar(mapa);
    }
}

void Robos::comandoMover(string comando, Mapa& mapa) {
    int coordenadaX = stoi(comando.substr(comando.find("(")+1,comando.find(",")));
    int coordenadaY = stoi(comando.substr(comando.find(",")+1,comando.find(")")));
    string auxHistorico;
    if (mapa.encontrarPonto(coordenadaX,coordenadaY)!="Obstaculo") {
        auxHistorico = "ROBO "+to_string(idRobo)+": MOVEU PARA ("+to_string(coordenadaX)+","+to_string(coordenadaY)+")";
    } 
    else {
        auxHistorico = "ROBO "+to_string(idRobo)+": IMPOSSIVEL MOVER PARA ("+to_string(coordenadaX)+","+to_string(coordenadaY)+")";
    }
    filaHistorico[0]->Enfileira(auxHistorico);
}

// void Robos::comandoColetar(Mapa& mapa) {
//   string runned_order;
//   if(this->collect_resource(map, this->pos_x, this->pos_y)) {
//     runned_order = "ROBO "+to_string(id)+": RECURSOS COLETADOS EM ("+to_string(this->pos_x)+","+to_string(this->pos_y)+")";
//   }
//   else {
//     runned_order = "ROBO "+to_string(id)+": IMPOSSIVEL COLETAR RECURSOS EM ("+to_string(this->pos_x)+","+to_string(this->pos_y)+")";
//   }
//   filaHistorico[0]->Enfileira(runned_order);
// }

// void Robos::comandoEliminar(Mapa& mapa) {
//   string runned_order;
//   if(this->destroy_alien(map, this->pos_x, this->pos_y)) {
//     runned_order = "ROBO "+to_string(id)+": ALIEN ELIMINADO EM ("+to_string(this->pos_x)+","+to_string(this->pos_y)+")";
//   }
//   else {
//     runned_order = "ROBO "+to_string(id)+": IMPOSSIVEL ELIMINAR ALIEN EM ("+to_string(this->pos_x)+","+to_string(this->pos_y)+")";
//   }
//   filaHistorico[0]->Enfileira(runned_order);
// }

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