#include <iostream>
#include <fstream>

#include "../include/Mapa.h"

using namespace std;

Mapa::Mapa(ifstream &arquivoMapa) {
	mapaBase = 'B';
	recurso = 'R';
	obstaculo = 'O';
	inimigo = 'H';
	vazio = '.';
	linhas = 0;
	colunas = 0;
	arquivoMapa >> linhas >> colunas;
	gerarMapa(arquivoMapa);
}

void Mapa::gerarMapa(ifstream &arquivoMapa) {
	if (arquivoMapa.is_open()){
		// Tamanho do mapa
		// Preenche o mapa
		for(int i=0; i<linhas; i++) {
			for(int j=0; j<colunas; j++) { 
				arquivoMapa >> mapaMatriz[i][j];
			}
		}
		} else {
		cout << "Nao foi possivel abrir o arquivo do mapa! Verifique o nome e a localizacao do arquivo." << endl;
	}
}

void Mapa::encontrarPonto(int x, int y) {
	if (x >= linhas || x >= colunas){
		cout << "O ponto solicitado nao existe no mapa";
	} else if (mapaMatriz[x][y] == recurso){
		cout << "(" << x << "," << y << "): "<< "Recurso";
	} else if (mapaMatriz[x][y] == obstaculo){
		cout << "(" << x << "," << y << "): "<< "Obstáculo";
	} else if (mapaMatriz[x][y] == inimigo){
		cout << "(" << x << "," << y << "): "<< "Inimigo";
	} else if (mapaMatriz[x][y] == vazio){
		cout << "(" << x << "," << y << "): "<< "Vazio";
	}
	else if (mapaMatriz[x][y] == mapaBase){
		cout << "(" << x << "," << y << "): "<< "Base";
	}
    cout << endl;
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