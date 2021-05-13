#include <cstdlib>
#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int x) {
    PonteiroElemento p;
    p = new elemento;
    p->valor = x;
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

bool Fila::remover(int &x) {
    PonteiroElemento p;
    if (vazia())
        return false;
    x = inicio->valor;
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}


bool Fila::primeiro(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do primeiro elemento da lista
	// seu código aqui:
	
	
	
}

bool Fila::ultimo(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do último elemento da lista
	// seu código aqui:


	
}

bool Fila::esvaziar() {
	// caso a lista esteja vazia retornar falso
	// remover todos os elementos da lista
	// seu código aqui:
	
	
}

int Fila::tamanho() {
	// retornar o tamanho da lista, 0 se estiver vazia
	// seu código aqui:
	

	
}

bool Fila::inverter() {
	// caso a lista esteja vazia retornar falso
	// inverter a ordem dos elementos da lista
	// seu código aqui:
	
	
	
}

string Fila::listar() {
	// retornar string com todos os elementos da lista separados por ;
	// exemplo: 1 ; 3 ; 5
	// string vazia se a lista estiver vazia
	// seu código aqui:



}

bool Fila::estaNaFila(int x) {
	// retornar verdadeiro caso o valor x seja localizado na fila
	// seu código aqui:
	
	
}

Fila Fila::interseccao(Fila auxFila) {
	// retornar objeto Fila contendo a intersecção com a lista atual
	// elementos em comum com as 2 listas
	// sem repetição de elementos
	// seu código aqui:
		

	
}

Fila Fila::uniao(Fila auxFila) {
	// retornar objeto Fila contendo a união com a lista atual
	// elementos das 2 listas
	// sem repetição de elementos
	// seu código aqui:


	
}




