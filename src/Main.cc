#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "Test.h"

using namespace std;

int main(int argc, char* argv[]) {
    int linhas, colunas;
    ifstream fileMap(argv[1]);

    fileMap >> linhas >> colunas;

    // Número de linhas e colunas da matriz
    char MapMatrix[linhas][colunas];

    // Adicionando elementos do mapa na matriz
    int i, j;
    for(i=0; i<linhas; i++) {
		for(j=0; j<colunas; j++) { 
            fileMap >> MapMatrix[i][j];
		}
	}

    cout << MapMatrix[9][4];   

    return 0;
}