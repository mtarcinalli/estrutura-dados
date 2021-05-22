#include <string>
#include "Lista.h"

Lista::Lista() {
    inicio = NULL;
    contador = 0;
}

bool Lista::vazia() {
    return inicio == NULL;
}

bool Lista::cheia() {
    return false;
}

bool Lista::setaPosicao(int posicao, PonteiroElemento &atual) {
    atual = inicio;
    for(int i = 1 ; i < posicao ; i++) {
        atual = atual->proximoElemento;
    }    
    return true;
}

bool Lista::inserir(int posicao, int auxIdHotel, int auxIdAnalise, string auxAnalise) {
    PonteiroElemento p, atual;
    
    if (posicao < 1 or posicao > contador + 1) {
        return false;
    }

    p = new elemento;
    
    p->idAnalise = auxIdAnalise;
    p->idHotel = auxIdHotel;
    p->analise = auxAnalise;
    
    if (posicao == 1) {
        p->proximoElemento = inicio;
        inicio = p;
    } else {
        setaPosicao(posicao - 1, atual);
        p->proximoElemento = atual->proximoElemento;
        atual->proximoElemento = p;
    }
    contador++;
    return true;    
}

bool Lista::remover(int posicao, int &auxIdHotel, int &auxIdAnalise, string &auxAnalise) {
    PonteiroElemento p, atual;
    
    if (posicao < 1 or posicao > contador) {
        return false;
    }

    if(posicao == 1) {
        p = inicio;
        inicio = inicio->proximoElemento;
    } else {
        setaPosicao(posicao - 1, atual);
        p = atual->proximoElemento;
        atual->proximoElemento = p->proximoElemento;
    }

    auxIdHotel = p->idHotel;
    auxIdAnalise = p->idAnalise;
    auxAnalise = p->analise;

    delete p;
    contador --;
    
    return true;
}

int Lista::tamanho() {
    return contador;
}