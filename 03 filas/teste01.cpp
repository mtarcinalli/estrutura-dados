#include <iostream>
#include "Fila.cpp"

using namespace std;

int main() {
    Fila minhaFila;
    int x, y;

    if (minhaFila.vazia()) {
        cout << "Esta vazia!\n";
    } 
    minhaFila.inserir(1);
    cout << "Esta vazia: " << minhaFila.vazia() << "\n";
    minhaFila.inserir(2);
    cout << "Esta vazia: " << minhaFila.vazia() << "\n";
    minhaFila.remover(x);
    cout << "Esta vazia: " << minhaFila.vazia() << "\n";
    minhaFila.remover(x);
    cout << "Esta vazia: " << minhaFila.vazia() << "\n";
}
