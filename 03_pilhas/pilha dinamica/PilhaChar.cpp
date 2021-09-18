#include <cstdlib>
#include "PilhaChar.h"

PilhaChar::PilhaChar() {
    topo = NULL;
}

bool PilhaChar::vazia() {
    if (topo == NULL) {
        return 1;
    } else {
        return 0;
    }
}

bool PilhaChar::empilhar(char x) {
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

bool PilhaChar::desempilhar(char &x) {
    PonteiroPilha p;
    if (vazia()) {
        return 0;
    }
    x = topo->valor;
    p = topo;
    topo = topo->proximoNo;
    free(p);
    return 1;
}

int PilhaChar::retornaTopo() {
    return topo->valor;
}
