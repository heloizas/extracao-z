#include <iostream>
#include <fstream>

#include "../include/Comandos.h"

using namespace std;

Comandos::Comandos(ifstream &arquivoComandos) {
    quantidadeComandos = 0;
    if (arquivoComandos.is_open()){
        while(getline(arquivoComandos, linhaComando)){
            comandos[quantidadeComandos] = linhaComando;
            quantidadeComandos++;
        }
    } else {
        cout << "ERRO: Nao foi possivel abrir o arquivo" << endl;
    }
	cout << "Oi";
}

void Comandos::imprimirComandos() {
	for(int i=0; i<quantidadeComandos; i++) {
		cout << comandos[i] << endl;
	}
}

Comandos::~Comandos() {

}