#include "Fila.h"

Fila::Fila() {
    inicio = nullptr;
    fim = nullptr;
}

bool Fila::vazia() {
    return inicio == nullptr;
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int x) {
    PonteiroElemento p;
    p = new elemento;
    if (p == nullptr) {
        return 0;
    }
    p->valor = x;
    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = nullptr;
    return true;
}

bool Fila::remover(int &x) {
    PonteiroElemento p;
    if (vazia())
        return false;
    x = inicio->valor;
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == nullptr)
        fim = nullptr;
    return true;
}