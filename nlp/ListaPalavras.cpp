#include <string>
#include "ListaPalavras.h"

ListaPalavras::ListaPalavras() {
    inicio = NULL;
    contador = 0;
}

bool ListaPalavras::vazia() {
    return inicio == NULL;
}

bool ListaPalavras::cheia() {
    return false;
}

bool ListaPalavras::setaPosicao(int posicao, PonteiroElemento &atual) {
    atual = inicio;
    for(int i = 1 ; i < posicao ; i++) {
        atual = atual->proximoElemento;
    }    
    return true;
}

bool ListaPalavras::inserir(int posicao, string auxPalavra) {
    PonteiroElemento p, atual;
    
    if (posicao < 1 or posicao > contador + 1) {
        return false;
    }

    p = new elemento;
    
    p->palavra = auxPalavra;
    
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




bool ListaPalavras::remover(int posicao, string &auxPalavra) {
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

    auxPalavra = p->palavra;

    delete p;
    contador --;
    
    return true;
}

int ListaPalavras::tamanho() {
    return contador;
}

bool ListaPalavras::inserirFinal(string auxPalavra) {
    return inserir(contador + 1, auxPalavra);
}


string ListaPalavras::listar(int qtd) {
    string retorno = "";
    int cont = 0;
    PonteiroElemento p;
    p = inicio;
    while (p->proximoElemento != NULL and (cont < qtd  or qtd == 0)) {
        retorno += "[" + p->palavra + "] ";
        p = p->proximoElemento;
        cont++;
    }
    return retorno;
}

bool ListaPalavras::estaNaLista(string auxPalavra) {
    string retorno = "";
    PonteiroElemento p;
    p = inicio;
    while (p->proximoElemento != NULL) {
        if (auxPalavra == p->palavra) {
            return true;
        }
        p = p->proximoElemento;
    }
    return false;
}
