class DisjointSet {
private:
    int* conjuntos;
    int* altura;

public:
    DisjointSet(int n) {
        conjuntos = new int[n + 1];
        altura = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            conjuntos[i] = i;
            altura[i] = 0;
        }
    }

    int find(int x) {
        if (conjuntos[x] == x) {
            return x;
        }

        conjuntos[x] = find(conjuntos[x]);
        return conjuntos[x];
    }

    void merge(int x, int y) {
        int xRep = find(x);
        int yRep = find(y);

        if (xRep == yRep) {
            return;
        }

        if (altura[xRep] < altura[yRep]) {
            conjuntos[xRep] = yRep;
        }
        else if (altura[xRep] > altura[yRep]) {
            conjuntos[yRep] = xRep;
        }
        else {
            conjuntos[yRep] = xRep;
            altura[xRep]++;
        }
    }
};