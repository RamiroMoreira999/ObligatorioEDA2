#pragma once

#include "tabla.cpp"
#include "hash_func.cpp"
#include <assert.h>

template <class K, class V> class openHashTable : public table<K, V> {
private:
  struct nodo {
    K key;
    V value;
    nodo *next = nullptr;

    nodo(K key, V value) {
      this->key = key;
      this->value = value;
    }
  };

  nodo **buckets;
  int largoArray;
  int cantidadCajones;
  hashFunc<K> *h;

  bool esPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= num / 2; i += 2) {
      if (num % i == 0) return false;
    }
    return true;
  }

  int primoSup(int num) {
    while (!esPrimo(++num));
    return num;
  }

  int abs(int x) {
    if (x < 0) return -x;
    return x;
  }

  int posicion(K key) {
    return abs(this->h->hash(key)) % largoArray;
  }

public:
  openHashTable(int capacidadEsperada, hashFunc<K> *h) {
    int tamañoDeseado = (int)(capacidadEsperada / 0.7);
    this->largoArray = primoSup(tamañoDeseado);
    this->buckets = new nodo*[largoArray]();
    this->cantidadCajones = 0;
    this->h = h;
  }

  virtual void set(K key, V value) override {
    int pos = posicion(key);
    nodo *actual = buckets[pos];
    while (actual != nullptr) {
      if (actual->key == key) {
        actual->value = value;
        return;
      }
      actual = actual->next;
    }
    nodo *nuevo = new nodo(key, value);
    nuevo->next = buckets[pos];
    buckets[pos] = nuevo;
    cantidadCajones++;
  }

  virtual bool exists(K key) override {
    int pos = posicion(key);
    nodo *actual = buckets[pos];
    while (actual != nullptr) {
      if (actual->key == key) return true;
      actual = actual->next;
    }
    return false;
  }

  virtual V get(K key) override {
    int pos = posicion(key);
    nodo *actual = buckets[pos];
    while (actual != nullptr) {
      if (actual->key == key) return actual->value;
      actual = actual->next;
    }
    assert(false);
  }

  virtual void remove(K key) override { assert(false); }

  virtual int size() override { return cantidadCajones; }
};