#include <iostream>
#include <cstdlib>

using namespace std;

#include "Fila.cpp"

int main() {
    Fila minhaFila;
    
    for (int i = 10 ; i < 20 ; i++) {
        if (minhaFila.inserir(i))
            cout << "i: " << i << " - inserido com sucesso!!!\n"; 
        else
            cout << "i: " << i << " - não inserido!!!\n";
    }
}
