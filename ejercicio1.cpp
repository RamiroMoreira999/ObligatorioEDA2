#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "avl.cpp"
#include "lista.cpp"


int main() {

  avl<long long> monedas;
  avl<std::string> pinturas;

  int n;
  std::cin >> n;

  std::string operacion;
  std::string letra;

  for (int i = 0; i < n; i++) {
    std::cin >> operacion >> letra;

    if (operacion == "ALTA") {
      if (letra == "M") {
        long long c;
        std::cin >> c;
        monedas.add(c);
      } else {
        std::string t; 
        std::cin >> t;
        pinturas.add(t);
      }
    } else if (operacion == "BUSCAR") {
      bool encontrado;
      if (letra == "M") {
        long long c;
        std::cin >> c;
        encontrado = monedas.contains(c);
      } else {
        std::string t; 
        std::cin >> t;
        encontrado = pinturas.contains(t);
      }
      if (encontrado) std::cout << "si" <<std::endl; 
      else std::cout << "no" <<std::endl;
    } else { // RANGO
      if (letra == "M") {
        long long desde; 
        long long hasta; 
        std::cin >> desde >> hasta;
        lista<long long> resultado;
        monedas.range(desde, hasta, resultado);
        resultado.iniciarRecorrido();
        while (resultado.haySiguiente()) {
          std::cout << resultado.siguiente() << std::endl;
        }
      } else {
        std::string desde; 
        std::string hasta; 
        std::cin >> desde >> hasta;
        lista<std::string> resultado;
        pinturas.range(desde, hasta, resultado);
        resultado.iniciarRecorrido();
        while (resultado.haySiguiente()) {
          std::cout << resultado.siguiente() << std::endl;
        }
      }
    }
  }

  return 0;
}