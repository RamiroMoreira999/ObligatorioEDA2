#pragma once

#include "listIterador.cpp"
#include <cassert>

template <class T> class linkedList : public list<T> {
private:
  struct node {
    T data;
    node* next;

    node(T data) : data(data), next(nullptr) {}
  };

  class linkedListIterator : public iterator<T> {
  private:
    node* curr;

  public:
    linkedListIterator(node* head) {
      this->curr = head;
    }

    virtual bool hasNext() override {
      return this->curr != nullptr;
    }

    virtual T next() override {
      T elem = curr->data;
      curr = curr->next;
      return elem;
    }
  };

  node* head = nullptr;
  int count = 0;

public:
  linkedList() {}

  virtual iterator<T>* getIterator() override {
    return new linkedListIterator(this->head);
  }

  virtual void add(T data) override {
    node* nuevo = new node(data);
    nuevo->next = this->head;
    this->head = nuevo;
    count++;
  }

  virtual int size() override {
    return count;
  }

  virtual T getPos(int p) override {
    assert(p >= 0 && p < count);

    node* aux = this->head;

    for (int i = 0; i < p; i++) {
        aux = aux->next;
    }

    return aux->data;
  }

  virtual int findPos(T data) override {
    assert(false);
    return -1;
  }

  virtual void remove(T data) override {
    assert(false);
  }

  virtual void removePos(int pos) override {
    assert(false);
  }
};