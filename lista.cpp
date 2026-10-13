#pragma once

template <class T> class lista {
private:
  struct node {
    T data;
    node *next = nullptr;
    node(T data) { this->data = data; }
  };

  node *head = nullptr;
  node *tail = nullptr;
  node *actual = nullptr;

public:
  lista() {}

  void agregarAlFinal(T data) {
    node *nuevo = new node(data);
    if (head == nullptr) {
      head = nuevo;
      tail = nuevo;
    } else {
      tail->next = nuevo;
      tail = nuevo;
    }
  }

  void iniciarRecorrido() { actual = head; }
  bool haySiguiente() { return actual != nullptr; }
  T siguiente() {
    T data = actual->data;
    actual = actual->next;
    return data;
  }
};