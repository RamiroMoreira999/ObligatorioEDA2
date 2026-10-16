#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "tads/heap.cpp"
#include "tads/min_heap.cpp"

using namespace std;

int main()
{
    int n;
    cin >> n;

    heap<long long> *h = new minHeap<long long>(n);

    for (int i = 0; i < n; i++) {
        int tamano;
        cin >> tamano;
        h->push(tamano);
    }

    long long total = 0;

    while (h->size() > 1) {
        long long a = h->pop();
        long long b = h->pop();
        long long costo = a + b;
        total += costo;
        h->push(costo);
    }

    cout << total << endl;

    return 0;
}
