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
 
bool Robos::roboAtivo(){
    return ativo;
}

void Robos::ativarRobo() {
    if (!roboAtivo()){
        ativo = true;
    }
}

// bool Robos::ativarRobo() {
//     bool auxAtivo = ativo;
//     ativo = true;
//     return auxAtivo;
// }

void Robos::executarRobo(Mapa& mapa) {
    int tamanho = filaComandos[0]->tamanho;
    string comando;
    // mapa.imprimirMapa();

    // cout << endl;
    // cout << endl;

    for(int i = 0; i < tamanho; i++) {
        comando = filaComandos[0]->Desenfileira();
        processarComando(comando, mapa);
    }
} 

void Robos::processarComando(string comando, Mapa& mapa){
    if(comando.find("MOVER") != string::npos) {
        comandoMover(comando, mapa);
    } else if(comando.find("COLETAR") != string::npos) {
        comandoColetar(mapa);
    } else if(comando.find("ELIMINAR") != string::npos) {
        comandoEliminar(mapa);
    }
}

void Robos::comandoMover(string comando, Mapa& mapa) {
    int coordenadaX = stoi(comando.substr(comando.find("(")+1,comando.find(",")));
    int coordenadaY = stoi(comando.substr(comando.find(",")+1,comando.find(")")));
    string auxHistorico;
    if (mapa.encontrarPonto(coordenadaX,coordenadaY)!="Obstaculo") {
        posicaoX = coordenadaX;
        posicaoY = coordenadaY;
        auxHistorico = "ROBO "+to_string(idRobo)+": MOVEU PARA ("+to_string(coordenadaX)+","+to_string(coordenadaY)+")";
    } 
    else {
        auxHistorico = "ROBO "+to_string(idRobo)+": IMPOSSIVEL MOVER PARA ("+to_string(coordenadaX)+","+to_string(coordenadaY)+")";
    }
    filaHistorico[0]->Enfileira(auxHistorico);
}

void Robos::comandoColetar(Mapa& mapa) {
    if(mapa.encontrarPonto(posicaoX, posicaoY) == "Recurso") {
        mapa.adicionarPonto(posicaoX, posicaoY);
        qtdRecursosColetados++;
        auxHistorico = "ROBO "+to_string(idRobo)+": RECURSOS COLETADOS EM ("+to_string(this->posicaoX)+","+to_string(this->posicaoY)+")";
    }
    else {
        auxHistorico = "ROBO "+to_string(idRobo)+": IMPOSSIVEL COLETAR RECURSOS EM ("+to_string(this->posicaoX)+","+to_string(this->posicaoY)+")";
    }
    filaHistorico[0]->Enfileira(auxHistorico);
    // mapa.imprimirMapa();
}

void Robos::comandoEliminar(Mapa& mapa) {
    if(mapa.encontrarPonto(posicaoX, posicaoY) == "Inimigo") {
        auxHistorico = "ROBO "+to_string(idRobo)+": ALIEN ELIMINADO EM ("+to_string(this->posicaoX)+","+to_string(this->posicaoY)+")";
        mapa.adicionarPonto(posicaoX, posicaoY);
        qtdInimigosEliminados++;
    }
    else {
        auxHistorico = "ROBO "+to_string(idRobo)+": IMPOSSIVEL ELIMINAR ALIEN EM ("+to_string(this->posicaoX)+","+to_string(this->posicaoY)+")";
    }
    filaHistorico[0]->Enfileira(auxHistorico);
    // mapa.imprimirMapa();
}

int Robos::qtdRecursos(){
    return qtdRecursosColetados;
}

int Robos::qtdInimigos(){
    return qtdInimigosEliminados;
}

void Robos::retornarBase() {
    ativo = false;
    posicaoX = 0;
    posicaoY = 0;
    qtdInimigosEliminados: 0;
    qtdRecursosColetados: 0;
    int tamanho = filaComandos[0]->tamanho;
    for(int i=0; i < tamanho; i++) {
        filaComandos[0]->Desenfileira();
    }
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

Robos::~Robos() {

}