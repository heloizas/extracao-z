#include <iostream>
#include <fstream>
#include "../include/Test.h"

#define MAXTAM 100
using namespace std;

void printMap(char Matrix[][MAXTAM], int linhas, int colunas) {
	int i, j;
	for(i=0; i<linhas; i++) {
		for(j=0; j<colunas; j++) { 
			cout << Matrix[i][j];
		}
		cout << endl;
	}
}

void printCommands(string comandos[MAXTAM], int lineCount) {
	int i;
	for(i=0; i<lineCount; i++) {
		cout << comandos[i] << endl;
	}
}

int main(int argc, char* argv[]) {
    //Mapa
    int linhas, colunas;
    ifstream fileMap(argv[1]);
    // Armazena o número de linhas e colunas
    fileMap >> linhas >> colunas;
    // Cria matriz
    char MapMatrix[MAXTAM][MAXTAM];
    // Adicionando elementos do mapa na matriz
    int i, j;
    for(i=0; i<linhas; i++) {
		for(j=0; j<colunas; j++) { 
            fileMap >> MapMatrix[i][j];
		}
	}
    // printMap(MapMatrix, linhas, colunas);

    // Comandos
    ifstream fileCommand(argv[2]);
    string comandos[MAXTAM];
    string lineCommand;
    int lineCount = 0;

    if (fileCommand.is_open()){
        while(getline(fileCommand, lineCommand)){
            comandos[lineCount] = lineCommand;
            lineCount++;
        }
    } else {
        cout << "ERRO: Nao foi possivel abrir o arquivo" << endl;
    }

    printCommands(comandos, lineCount);

    return 0;
}