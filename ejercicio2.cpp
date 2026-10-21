#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "funciones/abecedario.cpp"
#include "tads/tabla.cpp"
#include "tads/open_hash_table.cpp"


int main(){

    int cantReg;
    std::cin >> cantReg;

    hashAbc h;
    table<int*, int>* tablaReg = new openHashTable<int*, int>(cantReg, &h);

    int cajonesDistintos = 0;
    int masGrande = 0;

    for (int i = 0; i < cantReg; i++) {
        std::string registro;
        std::cin >> registro;
        int *clave = h.abc(registro);

        int nuevoCount;
        if (tablaReg->exists(clave)) {
            nuevoCount = tablaReg->get(clave) + 1;
        } else {
            nuevoCount = 1;
            cajonesDistintos++;
        }
        tablaReg->set(clave, nuevoCount);

        if (nuevoCount > masGrande) {
            masGrande = nuevoCount;
        }
    }

    int cantConsultas;
    std::cin >> cantConsultas;

    for (int i = 0; i < cantConsultas; i++) {
        std::string consulta;
        std::cin >> consulta;
        int *clave = h.abc(consulta);

        if (tablaReg->exists(clave)) {
            std::cout << tablaReg->get(clave) << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }

    std::cout << cajonesDistintos << " " << masGrande << std::endl;

    return 0;
}
