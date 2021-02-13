#include <iostream>
#include <fstream>

#include "../include/Missao.h"

using namespace std;

Missao::Missao(ifstream &arquivoMapa, ifstream &arquivoComandos) {
	mapa = new Mapa(arquivoMapa);
	base = new Base;
	comandos = new Comandos(arquivoComandos, *base);
}

Missao::~Missao() {

}