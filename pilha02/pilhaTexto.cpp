#include <iostream>
#include "Pilha.cpp"

using namespace std;


int main() {


	int tam1 = 0, tam2 = 0, l;
	string nome;
	
	Pilha texto1, texto2;
	
	nome = "12345";
	for (int i = 0 ; i < nome.length(); i++) {
	    texto1.empilhar(nome[i]);
	}
	
	nome = "1234567";
	for (int i = 0 ; i < nome.length(); i++) {
	    texto2.empilhar(nome[i]);
	}
	
	while (! texto1.estaVazia()) {
	    texto1.desempilhar(l);
	    cout << (char) l;
	    tam1++;
	}
	cout << "\n";
	
	while (texto2.desempilhar(l)) {
	    tam2++;
	}
	
	cout << "tam 01: " << tam1 << "\ntam 02: " << tam2;

}
