class DisjointSet {
private:
    int* conjuntos;
public:
    DisjointSet(int n) {
        conjuntos = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            conjuntos[i] = i;
        }
    }
    int find(int x) {
        if (conjuntos[x] == x) {
            return x;
        }
        return find(conjuntos[x]);
    }
    void merge(int x, int y) {
        int xRep = find(x);
        int yRep = find(y);
        conjuntos[yRep] = xRep;
    }
};