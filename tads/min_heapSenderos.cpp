#pragma once
#include "heap.cpp"
#include <cassert>

template <class T> class minHeapSenderos : public heap<T> {
private:
  T *arr;
  int arrLength;
  int count;

  void grow(int newlength) {
    T *newArr = new T[newlength];
    for (int i = 0; i < this->arrLength; i++) {
      newArr[i] = this->arr[i];
    }
    this->arr = newArr;
  }
  
  bool esMenorPeso(T a, T b) {
    return a.weight < b.weight;
  }

  
  void swap(int posA, int posB) {
    T aux = this->arr[posA];
    this->arr[posA] = this->arr[posB];
    this->arr[posB] = aux;
  }

  void siftUp(int pos) {
    if (pos == 1) {
      return;
    }

    int parentPos = pos / 2;

    T elem = this->arr[pos];
    T parent = this->arr[parentPos];

    if (esMenorPeso(elem,parent)) {
      swap(pos, parentPos);
      siftUp(parentPos);
    }
  }

  void siftDown(int pos) {
    int izq = pos * 2;
    int der = pos * 2 + 1;

    if (izq > this->count) {
      return;
    }

    int menor = izq;

    if (der <= this->count && esMenorPeso(this->arr[der] , this->arr[izq])) {
      menor = der;
    }

    if (esMenorPeso(this->arr[menor], this->arr[pos])) {
      swap(pos, menor);
      siftDown(menor);
    }
  }

public:
  minHeapSenderos(int expectedSize) {
    this->arr = new T[expectedSize + 1];
    this->arrLength = expectedSize + 1;
    this->count = 0;
  }

  virtual void push(T elem) override {
    if (this->count == this->arrLength) {
      grow(this->arrLength * 2);
    }

    this->count++;
    this->arr[this->count] = elem;

    siftUp(this->count);
  }

  virtual T top() override {
    assert(size() >= 1);
    return this->arr[1];
  }

  virtual T pop() override {
    assert(size() >= 1);

    T raiz = this->arr[1];
    this->arr[1] = this->arr[this->count];
    this->count--;
    siftDown(1);

    return raiz;
  }

  virtual int size() override { return this->count; }

  virtual bool isEmpty() override { return size() == 0; }
};