#include <cstdlib>
#include "Pilha.h"

Pilha::Pilha() {
    topo = NULL;
}

Pilha::~Pilha() {
    int x;
    while (!estaVazia()) {
        desempilhar(x);
    }
}

bool Pilha::estaVazia() {
    if (topo == NULL) {
        return 1;
    } else {
        return 0;
    }
}

bool Pilha::empilhar(int x) {
    PonteiroPilha p;
    p = new noPilha;
    if (p == NULL) {
        return 0;
    }
    p->valor = x;
    p->proximoNo = topo;
    topo = p;
    return 1;
}

bool Pilha::desempilhar(int &x) {
    PonteiroPilha p;
    if (estaVazia()) {
        return 0;
    }
    x = topo->valor;
    p = topo;
    topo = topo->proximoNo;
    free(p);
    return 1;
}

int Pilha::retornaTopo() {
    return topo->valor;
}
