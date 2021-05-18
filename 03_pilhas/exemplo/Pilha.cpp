#include "pilha.h"

Pilha::Pilha(int tamanho) {
	//cout << "Criando Pilha\n";
	this->redefinir(tamanho);
}

bool Pilha::redefinir(int tamanho) {
	this->topo = -1;
	this->capacidade = tamanho -1;
	this->conteudo = (int*) malloc (tamanho * sizeof(int));	
}

Pilha::~Pilha() {
	//cout << "Destruindo Pilha\n";
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
	std::cout << "Topo da pilha\n";
	return this->conteudo[this->topo];
}



