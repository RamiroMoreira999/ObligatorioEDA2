#pragma once

#include "bst.cpp"
#include <assert.h>

template <class T> class avl : public bst<T> {
private:
  struct node {
    T data;
    node *left = nullptr;
    node *right = nullptr;
    int height = 1;

    // constructor
    node(T data) { this->data = data; }
  };

  node *root = nullptr;

  int size(node *n) {
    if (n == nullptr) {
      return 0;
    }

    return 1 + size(n->left) + size(n->right);
  }

  int max(int a, int b) {
    if (a > b)
      return a;
    return b;
  }

  int height(node *n) {
    if (n == nullptr) {
      return 0;
    }
    return n->height;
  }

  void range(node *n, T desde, T hasta) {
    if(n == nullptr) return;
    if(n->data < desde){
      range(n-> right,desde, hasta);
    }else if(n->data > hasta){
      range(n-> left, desde, hasta);
    }else{
      range(n-> left,desde, hasta);
      cout<< n-> data;
      range(n-> right, desde, hasta);
    }
  }

  bool contains(node *n, T data){
    if (n == nullptr) return false;
    bool esta = false;
    if(n-> data == data) esta = true;
    if(n-> data < data)return contains(n-> right,data);
    else if(n-> data > data)return contains(n-> left,data);
    return esta;
  }

  node *leftRotation(node *n) {
    //       z
    //     /   \
    //   z_l    y
    //         /  \
    //       y_l   x

    //       y
    //     /   \
    //    z     x
    //   /  \
    // z_l  y_l

    node *z = n;
    node *y = z->right;
    node *y_l = y->left;

    z->right = y_l;
    y->left = z;

    z->height = 1 + max(height(z->left), height(z->right));
    y->height = 1 + max(height(y->left), height(y->right));

    return y;
  }
  node *rightRotation(node *n) { 
    //       z
    //     /   \
    //   y      z_r
    //  /  \  
    // y_l  x    
  
    //       y
    //     /   \
    //   y_l     z
    //          / \
    //         x  z_r
  
    node *z = n;
    node *y = z->left;
    node *y_r = y->right;  

    z->left = y_r;
    y->right = z;

    z->height = 1 + max(height(z->left), height(z->right));
    y->height = 1 + max(height(y->left), height(y->right));

  return y;
  }

  node *rightLeftRotation(node *n) {
  n->right= rightRotation(n->right);
  return leftRotation(n);
  }

  node *leftRightRotation(node *n) { 
    n->left= leftRotation(n->left);
    return rightRotation(n);
   }

  node *balance(node *n) {
    // bf => Balance Factor
    int bF = height(n->left) - height(n->right);

    if (bF == -2) {
      // desbalance der-?
      int bFRight = height(n->right->left) - height(n->right->right);
      if (bFRight == -1) {
        // desbalance der-der
        n = leftRotation(n);
      } else {
        // desbalance der-izq
        n = rightLeftRotation(n);
      }
    } else if (bF == 2) {
      // desbalance izq-?

      int bFLeft = height(n->left->left) - height(n->left->right);
      if (bFLeft == -1) {
        // desbalance izq-der
        n = leftRightRotation(n);
      } else {
        // desbalance izq-izq
        n = rightRotation(n);
      }
    }

    return n;
  }

  node *add(node *n, T data) {
  if (n == nullptr) {
    return new node(data);
  }

  if (data < n->data) {
    n->left = add(n->left, data);
  } else if (n->data < data) {
    n->right = add(n->right, data);
  } else {
    return n;
  }

  n->height = 1 + max(height(n->left), height(n->right));
  n = balance(n);

  return n;
}

public:
  avl() {}

  virtual void add(T data) override { this->root = add(this->root, data); }
  virtual void remove(T data) override { assert(false); }
  virtual int size() override { return size(root); }
  virtual T max() override { assert(false); }
  virtual T min() override { assert(false); }
  virtual void range(T desde, T hasta) override { range(root, desde, hasta); }
};
