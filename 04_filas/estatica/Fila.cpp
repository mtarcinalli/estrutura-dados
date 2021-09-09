#include "Fila.h"

Fila::Fila() {
    contador = 0;
}

bool Fila::vazia() {
    return contador == 0;
}

bool Fila::cheia() {
    return contador == capacidade;
}

bool Fila::inserir(int x) {
    if (cheia()) {
        return false;
    }
    elementos[contador] = x;
    contador++;
    return true;
}

bool Fila::remover(int &x) {
    if (vazia()) {
        return false;
    }
    x = elementos[0];
    for (int i = 1 ; i < contador ; i++) {
        elementos[i-1] = elementos[i];
    }
    contador--;
    return true;
}
