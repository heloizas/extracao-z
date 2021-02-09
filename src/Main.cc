#include <iostream>
#include <fstream>

#include "../include/Mapa.h"
#include "../include/Comandos.h"
#include "../include/ListaRobos.h"

using namespace std;

int main(int argc, char* argv[]) {
    // Primeiro arquivo é o mapa e o segundo os comandos
    ifstream arquivoMapa(argv[1]);
    ifstream arquivoComandos(argv[2]);

    Mapa mapa(arquivoMapa, arquivoComandos);
    mapa.imprimirFila();
    // mapa.imprimirMapa();

    // cout << endl;
    // mapa.encontrarPonto(9,9); 
    // cout << endl;

    // mapa.imprimirComandos(); 
    // cout << endl;

    return 0;
}