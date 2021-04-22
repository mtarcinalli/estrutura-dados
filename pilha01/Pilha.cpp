#include <cstdlib>
#include "Pilha.h"

// Construtor
Pilha::Pilha(int tamanho) {
    this->redefinir(tamanho);
}

void Pilha::redefinir(int tamanho) {
    this->topo = -1;
    this->capacidade = tamanho -1;
    this->conteudo = (int*) malloc (tamanho * sizeof(int));	
}

bool Pilha::estaVazia() {
    if (this->topo == -1) {
        return 1;
    } else {
        return 0;
    }
}

bool Pilha::estaCheia() {
    if (this->topo == this->capacidade) {
        return 1;
    } else {
        return 0;
    }
}

bool Pilha::empilhar(int valor) {
    if (this->estaCheia())
        return 0;
    this->topo++;
    this->conteudo[this->topo] = valor;
    return 1;
}

int Pilha::desempilhar() {
    int aux = this->conteudo[this->topo];
    if (this->estaVazia())
        return 0;
    this->topo--;
    return aux;
}

int Pilha::retornaTopo() {
    return this->conteudo[this->topo];
}
