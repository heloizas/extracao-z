#include <iostream>
#include <fstream>

#include "../include/Mapa.h"

using namespace std;

Mapa::Mapa(ifstream &arquivoMapa) {
    arquivoMapa >> linhas >> colunas;
    for(int i=0; i<linhas; i++) {
		for(int j=0; j<colunas; j++) { 
            arquivoMapa >> mapaMatriz[i][j];
		}
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