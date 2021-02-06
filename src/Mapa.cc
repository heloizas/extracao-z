#include <iostream>
#include <fstream>

#include "../include/Mapa.h"

using namespace std;

Mapa::Mapa(ifstream &arquivoMapa) {
	if (arquivoMapa.is_open()){
		arquivoMapa >> linhas >> colunas;
		for(int i=0; i<linhas; i++) {
			for(int j=0; j<colunas; j++) { 
				arquivoMapa >> mapaMatriz[i][j];
			}
		}
		} else {
		cout << "ERRO: Nao foi possivel abrir o arquivo do mapa!" << endl;
	}
}



void Mapa::imprimirMapa() {
	for(int i=0; i<linhas; i++) {
		for(int j=0; j<colunas; j++) { 
			cout << mapaMatriz[i][j];
		}
		cout << endl;
	}
}

Mapa::~Mapa() {

}