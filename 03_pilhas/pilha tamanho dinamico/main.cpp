#include <iostream>
#include "Pilha.h"

using namespace std;

int main() {
    Pilha minhaPilha(2);

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
    if (minhaPilha.empilhar(2))
        cout << "ok\n";
    else
        cout << "não ok\n";

    cout << "Topo da pilha: " << minhaPilha.retornaTopo() << "\n";

    cout << "Desempilhado: " << minhaPilha.desempilhar() << "\n";
    cout << "Desempilhado: " << minhaPilha.desempilhar() << "\n";
    cout << "Desempilhado: " << minhaPilha.desempilhar() << "\n";

    minhaPilha.redefinir(3);

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
    if (minhaPilha.empilhar(2))
        cout << "ok\n";
    else
        cout << "não ok\n";

    cout << "Topo da pilha: " << minhaPilha.retornaTopo() << "\n";

    cout << "Desempilhado: " << minhaPilha.desempilhar() << "\n";
    cout << "Desempilhado: " << minhaPilha.desempilhar() << "\n";
    cout << "Desempilhado: " << minhaPilha.desempilhar() << "\n";
    cout << "Desempilhado: " << minhaPilha.desempilhar() << "\n";
}
