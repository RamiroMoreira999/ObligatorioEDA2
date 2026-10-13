#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "avl.cpp"
#include "lista.cpp"

using namespace std;

avl<int> monedas;
avl<string> pinturas;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  avl<int> monedas;
  avl<string> pinturas;

  int n;
  cin >> n;

  string operacion, letra;
  for (int i = 0; i < n; i++) {
    cin >> operacion >> letra;

    if (operacion == "ALTA") {
      if (letra == "M") {
        int c; cin >> c;
        monedas.add(c);
      } else {
        string t; cin >> t;
        pinturas.add(t);
      }
    } else if (operacion == "BUSCAR") {
      bool encontrado;
      if (letra == "M") {
        int c; cin >> c;
        encontrado = monedas.contains(c);
      } else {
        string t; cin >> t;
        encontrado = pinturas.contains(t);
      }
      cout << (encontrado ? "si" : "no") << "\n";
    } else { // RANGO
      if (letra == "M") {
        int desde, hasta; cin >> desde >> hasta;
        lista<int> resultado;
        monedas.range(desde, hasta, resultado);
        resultado.iniciarRecorrido();
        while (resultado.haySiguiente()) {
          cout << resultado.siguiente() << "\n";
        }
      } else {
        string desde, hasta; cin >> desde >> hasta;
        lista<string> resultado;
        pinturas.range(desde, hasta, resultado);
        resultado.iniciarRecorrido();
        while (resultado.haySiguiente()) {
          cout << resultado.siguiente() << "\n";
        }
      }
    }
  }

  return 0;
}