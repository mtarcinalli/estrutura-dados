#include <iostream>
#include "pilha.cpp"

using namespace std;

int main() {
    Pilha minhaPilha;
    int x;

    if (minhaPilha.estaVazia())
        cout << "Esta vazia!\n";
    else
        cout << "Não esta vazia!\n";

    cout << "Empilhando: 4 - ";
    if (minhaPilha.empilhar(4))
        cout << "ok\n";
    else
        cout << "não ok\n";

    cout << "Empilhando: 3 - ";
    if (minhaPilha.empilhar(3))
        cout << "ok\n";
    else
        cout << "não ok\n";

    cout << "Empilhando: 2 - ";
    if (minhaPilha.empilhar(2))
        cout << "ok\n";
    else
        cout << "não ok\n";

    cout << "Empilhando: 1 - ";
    if (minhaPilha.empilhar(1))
        cout << "ok\n";
    else
        cout << "não ok\n";

    cout << "Topo da pilha: " << minhaPilha.retornaTopo() << "\n";

    if (minhaPilha.desempilhar(x))
        cout << "Desempilhado: " << x << "\n";
    else
        cout << "Pilha vazia!\n";

    if (minhaPilha.desempilhar(x))
        cout << "Desempilhado: " << x << "\n";
    else
        cout << "Pilha vazia!\n";

    if (minhaPilha.desempilhar(x))
        cout << "Desempilhado: " << x << "\n";
    else
        cout << "Pilha vazia!\n";

     if (minhaPilha.desempilhar(x))
        cout << "Desempilhado: " << x << "\n";
    else
        cout << "Pilha vazia!\n";

     if (minhaPilha.desempilhar(x))
        cout << "Desempilhado: " << x << "\n";
    else
        cout << "Pilha vazia!\n";
    cin >> x;
}
