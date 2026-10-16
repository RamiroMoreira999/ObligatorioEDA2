#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "abecedario.cpp"
#include "tabla.cpp"
#include "open_hash_table.cpp"


using namespace std;

int main(){
   
    int cantReg;
    cin >> cantReg;

    hashAbc h;
    table<int*, int>* tablaReg = new openHashTable<int*, int>(cantReg, &h);


    for(int i=0;i<cantReg;i++){
        std::string registros;
        cin >> registros;
        

        
    }

    

}
