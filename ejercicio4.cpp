#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "tads/list_graph.cpp"
#include "tads/graph.cpp"
#include "tads/modulo.h"
#include "tads/min_heapModulos.cpp"


int main(){
    int v;
    int a;
    std::cin >> v;
    std::cin >> a;
    modulo* modulos = new modulo[v+1];
    for(int i=1; i<=v; i++){
        int prioridad;
        std::cin>>prioridad;
        modulos[i].prioridad = prioridad;
        modulos[i].numero = i;
    }
    graph* g = new list_graph(v, true);
    int* gradosDeEntrada= new int [v+1]();

    for (int i=1 ; i<=a; i++){
        int u;
        int w;
        std::cin >> u;
        std:: cin >> w;
        g->addEdge(u,w);
        gradosDeEntrada[w]++;
    }

    minHeapModulos<int> cola(v, modulos);
    int cont = 0;
    int* orden = new int[v+1];


    for (int i = 1; i <= v; i++) {
        if (gradosDeEntrada[i] == 0) {
            cola.push(i);
        }
    }


    while (!cola.isEmpty()) {
        int actual = cola.pop();
        cont++;
        orden[cont] = actual;

        iterator<edge>* it = g->getNeighbors(actual);

        while (it->hasNext()) {
            edge arista = it->next();
            int w = arista.to;
            gradosDeEntrada[w]--;

            if (gradosDeEntrada[w] == 0) {
                cola.push(w);
            }
        }

    }


    if (cont < v) {
        std::cout << "imposible" << std::endl;
    } 
    else {
        for (int i = 1; i <= cont; i++) {
            std::cout << orden[i] << std::endl;
        }
    }

    // TODO
    return 0;
}