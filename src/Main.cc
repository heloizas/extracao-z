#include <iostream>
#include <fstream>

#include "../include/Mapa.h"
#include "../include/Missao.h"
#include "../include/Comandos.h"
#include "../include/ListaRobos.h"
#include "../include/Fila.h"

using namespace std;

int main(int argc, char* argv[]) {
    // Primeiro arquivo é o mapa e o segundo os comandos
    ifstream arquivoMapa(argv[1]);
    ifstream arquivoComandos(argv[2]);

    Missao missao(arquivoMapa, arquivoComandos);
    // mapa.imprimirFila(); 
    // mapa.imprimirRelatorio();
    // mapa.imprimirMapa();

    // cout << endl;
    // mapa.encontrarPonto(9,9); 
    // cout << endl;

    // mapa.imprimirComandos(); 
    // cout << endl;

    // Fila
    // Fila FTeste;
    // string comando[6];
    // comando[0] = "Primeiro"; 
    // comando[1] = "Segundo";
    // comando[2] = "Terceiro";
    // comando[3] = "Quarto";

    // for(int i=0; i<4; i++){
    //     FTeste.Enfileira(comando[i]);
    // }

    // comando[4] = "*Prioritario";
    // FTeste.InserePrioritario(comando[4]);

    // comando[5] = "**2Prioritario";
    // FTeste.InserePrioritario(comando[5]);
    // FTeste.Imprime();

    return 0;
}