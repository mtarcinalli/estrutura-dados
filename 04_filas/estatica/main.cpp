#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

#include "Fila.cpp"

int main() {
    setlocale(LC_ALL, "Portuguese");
    Fila minhaFila;
    
    for (int i = 10 ; i < 20 ; i++) {
        if (minhaFila.inserir(i))
            cout << "i: " << i << " - inserido com sucesso!!!\n"; 
        else
            cout << "i: " << i << " - não inserido!!!\n";
    }
}
