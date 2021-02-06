#include <iostream>
#include <fstream>

#include "../include/ListaRobos.h"
#include "../include/Robos.h"

using namespace std;

ListaRobos::ListaRobos() {
    
}

ListaRobos::~ListaRobos() {

}

void ListaRobos::imprimirRelatorio(int id) {
    robos[id]->imprimirRelatorio();
} 
