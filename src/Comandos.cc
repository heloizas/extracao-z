#include <iostream>
#include <fstream>

#include "../include/Comandos.h"

using namespace std;

Comandos::Comandos(ifstream &arquivoComandos) {
    quantidadeComandos = 0;
    tipo = 1;
    gerarComandos(arquivoComandos);
}

void Comandos::gerarComandos(ifstream &arquivoComandos) {
    if (arquivoComandos.is_open()){
        while(getline(arquivoComandos, linhaComando)){
            comandos[quantidadeComandos] = linhaComando;
            quantidadeComandos++;
            executarComando(linhaComando);
        }
    } else {
        cout << "ERRO: Nao foi possivel abrir o arquivo de comandos!" << endl;
    }
}

void Comandos::executarComando(string comando) {
    if(tipoComando(comando) == 3) {
        // Prioridade
        // cout << comando << endl;
    }
    if (tipoComando(comando) == 1) {
        executarComandoOrdem(comando);
    } else if (tipoComando(comando) == 2) {
        executarComandoDireto(comando);
    }
    tipoComando(comando);
}

void Comandos:: executarComandoDireto(string comando) {
    if(comando.find("ATIVAR") != string::npos) {
        comandoAtivar(comando);
    } else if(comando.find("EXECUTAR") != string::npos) {
        comandoExecutar(comando);
    } else if(comando.find("RELATORIO") != string::npos) {
        comandoRelatorio(comando);
    } else if(comando.find("RETORNAR") != string::npos) {
        comandoRetornar(comando);
    }
}

void Comandos:: executarComandoOrdem(string comando) {
    if(comando.find("MOVER") != string::npos) {
        comandoMover(comando);
    } else if(comando.find("COLETAR") != string::npos) {
        comandoColetar(comando);
    } else if(comando.find("ELIMINAR") != string::npos) {
        comandoEliminar(comando);
    }
}

int Comandos::tipoComando(string comando) {
    // 1: Comando Ordem
    // 2: Comando Direto
    // 3: Comando Prioritário
    tipo = 1;
    if (comando[0] == '*'){
        tipo = 3;
    } else if ((comando.find("ATIVAR") != string::npos) || (comando.find("EXECUTAR") != string::npos)
    || (comando.find("RELATORIO") != string::npos) || (comando.find("RETORNAR") != string::npos)) {
        tipo = 2;
    }
    // cout << tipo << endl;
    return tipo;
}

// Ordens de comando
void Comandos::comandoMover(string comando) {
  coordenadaX = stoi(comando.substr(comando.find("(")+1,comando.find(",")));
  coordenadaY = stoi(comando.substr(comando.find(",")+1,comando.find(")")));
  cout << comando << endl;
  idRobo = stoi(comando.substr(6, 8));
  cout << "idRobo mover: " << idRobo << " " << coordenadaX << coordenadaY << endl;
}

void Comandos::comandoColetar(string comando) {
  cout << comando << endl;
  idRobo = stoi(comando.substr(8, comando.length()));
  cout << "idRobo coletar: " << idRobo << endl;
}

void Comandos::comandoEliminar(string comando) {
  cout << comando << endl;
  idRobo = stoi(comando.substr(9, comando.length()));
  cout << "idRobo eliminar: " << idRobo << endl;
}

// Ordens diretas:
void Comandos::comandoAtivar(string comando) {
  cout << comando << endl;
  idRobo = stoi(comando.substr(7, comando.length()));
  cout << "idRobo ativar: " << idRobo << endl;
}

void Comandos::comandoExecutar(string comando) {
  cout << comando << endl;
  idRobo = stoi(comando.substr(9, comando.length()));
  cout << "idRobo executar: " << idRobo << endl;
}

void Comandos::comandoRelatorio(string comando) {
  cout << comando << endl;
  idRobo = stoi(comando.substr(10, comando.length()));
  cout << "idRobo relatorio: " << idRobo << endl;
}

void Comandos::comandoRetornar(string comando) {
  cout << comando << endl;
  idRobo = stoi(comando.substr(9, comando.length()));
  cout << "idRobo retornar: " << idRobo << endl;
}

void Comandos::imprimirComandos() {
	for(int i=0; i<quantidadeComandos; i++) {
		cout << comandos[i] << endl;
	}
}

Comandos::~Comandos() {

}