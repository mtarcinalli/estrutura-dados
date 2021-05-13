#include <iostream>
#include "Fila.cpp"


//	Altere a classe que implementa a fila adicionando os seguintes métodos:
//  a.	Um método primeiro que deve retornar o primeiro elemento da fila;
//  b.	Um método último que deve retornar o último elemento da fila;
//  c.	Um método esvaziar que remova todos os elementos da fila;
//  d.	Um método tamanho que retorne o tamanho atual da fila;
//  e.	Um método inverter que inverta a ordem dos elementos atuais da fila;
//  f.	Um método listar que retorne um vetor contendo todos os elementos da fila;
//  g.	Um método que verifica se um dado valor se encontra na fila;
//  h.	Um método que receba uma lista e retorne a intersecção com essa lista;
//  i.	Um método que receba uma lista e retorne a união com essa lista;
//
// Implementar utilizando sempre somente os metódos inserir e remover.


using namespace std;

int main() {
    Fila minhaFila, fila01, fila02;
    int x, y;

    if (minhaFila.vazia()) {
        cout << "Esta vazia!\n";
    } 
    minhaFila.inserir(1);
    cout << "Esta vazia: " << minhaFila.vazia() << "\n";
    minhaFila.inserir(2);
    cout << "Esta vazia: " << minhaFila.vazia() << "\n";
    minhaFila.remover(x);
    cout << "Esta vazia: " << minhaFila.vazia() << "\n";
    minhaFila.remover(x);
    cout << "Esta vazia: " << minhaFila.vazia() << "\n";
    
    //fila02 = minhaFila.interseccao(fila01);
    //cout << fila02.listar();
    
}
