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

    Mapa mundo(arquivoMapa);
    mundo.imprimirMapa();

    cout << endl;

    Comandos comandos(arquivoComandos);
    comandos.imprimirComandos();
    
    cout << endl;

    ListaRobos lista;
    lista.imprimirRelatorio(1);

    cout << endl;

    return 0;
}