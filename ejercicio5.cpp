#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "tads/DisjoinSet.cpp"
#include "tads/list_graph.cpp"
#include "tads/graph.cpp"
#include "tads/min_heapSenderos.cpp"

int main(){
    int v;
    int e;
    std::cin >> v;
    std::cin >> e;
    graph* g = new list_graph(v, false);

    for (int i=1 ; i<=e; i++){
        int origen;
        int destino;
        int peso;
        std::cin >> origen;
        std:: cin >> destino;
        std:: cin >> peso;
        g->addWeightedEdge(origen, destino, peso);
    }

    iterator<edge>* it = g->getAllEdges();
    minHeapSenderos<edge> senderos(e);
    while (it->hasNext()) {
        edge a = it->next();

        if (a.from < a.to) {
            senderos.push(a);
        }
    }

    DisjointSet dSet(v);

    int cant = 0;
    long long costoTotal = 0;

    while (!senderos.isEmpty() && cant < v - 1) {
        edge a = senderos.pop();

        if (dSet.find(a.from) != dSet.find(a.to)) {
            dSet.merge(a.from, a.to);
            costoTotal += a.weight;
            cant++;
        }
    }

    if (cant == v - 1) {
        std::cout << costoTotal << std::endl;
    } 
    else {
        std::cout << "imposible" << std::endl;
    }


    // TODO
    return 0;
}