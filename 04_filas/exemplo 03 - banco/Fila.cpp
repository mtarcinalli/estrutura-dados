#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    if (inicio == NULL) {
        return true;
    } else {
        return false;
    }
    //return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(string x, int y) {
    PonteiroElemento p;
    p = new elemento;
    p->nome = x;
    p->conta = y;
    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(string &x, int &y) {
    PonteiroElemento p;
    if (vazia())
        return false;
    x = inicio->nome;
    y = inicio->conta;
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}

string Fila::listar() {
    Fila auxFila;
    string auxNome;
    int auxConta;
    string ret;
    ret = "";
    while (remover(auxNome, auxConta)) {
        auxFila.inserir(auxNome, auxConta);
        ret = ret + auxNome + " - " +  to_string(auxConta) + "\n";
    }

    while (auxFila.remover(auxNome, auxConta)) {
        inserir(auxNome, auxConta);
    }
    return ret;
}

int Fila::tamanho() {
    Fila auxFila;
    string auxNome;
    int auxConta;
    int tamanho=0;
    while (remover(auxNome, auxConta)) {
        auxFila.inserir(auxNome, auxConta);
        tamanho++;
    }
    while (auxFila.remover(auxNome, auxConta)) {
        inserir(auxNome, auxConta);
    }
    return tamanho;
}
