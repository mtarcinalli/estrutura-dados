#include <iostream>
#include <cstdlib>

using namespace std;

#include "Fila.cpp"

int main() {
    Fila fila01, fila02;
    Fila fila03;
    int y;

    for (int i = 0 ; i < 10 ; i++) {
        if (fila01.inserir(i))
            cout << "Inserido: " << i << endl;
        else
            cout << "Não inserido: " << i << endl;   
    }

    int contador = 0;
    while (fila01.remover(y)) {
        cout << "Removido: " << y << endl;
        contador++;
    }
    cout << "A fila tinha " << contador << " elementos!";
}