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

string Fila::listar() {
	// implementar listagem de elementos no formato
	// - 8 - 7 - 6 -
	// utilizar métodos inserir e remover
	//
	// seu código aqui	
	int y;
	Fila auxFila;
	string retorno = " - ";
	
	while (this->remover(y)) {
		//cout << y << "\n";
		retorno = retorno + to_string(y) + " - ";
		auxFila.inserir(y);
	}
	
	while (auxFila.remover(y)) {
		inserir(y);
	}
	
	return retorno;
	
}
