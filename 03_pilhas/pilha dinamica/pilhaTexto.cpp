#include <iostream>
#include "Pilha.cpp"
#include "PilhaChar.cpp"
#include "locale.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int tam1 = 0, tam2 = 0, l;
	string nome;
	char ch;
	
	Pilha texto1, texto2;
	PilhaChar minhaPilhaChar;
	
	nome = "abcdef";
	for (int i = 0 ; i < nome.length(); i++) {
	    texto1.empilhar(nome[i]);
	}
	
	for (int i = 0 ; i < nome.length(); i++) {
	    minhaPilhaChar.empilhar(nome[i]);
	}

	nome = "abcdef hijl";
	for (int i = 0 ; i < nome.length(); i++) {
	    texto2.empilhar(nome[i]);
	}

	cout << "\n\nPilha caracteres:\n";
	while (! minhaPilhaChar.vazia()) {
	    minhaPilhaChar.desempilhar(ch);
	    cout << ch;
	    tam1++;
	}


	cout << "\n\nSem cast:\n";
	while (! texto1.estaVazia()) {
	    texto1.desempilhar(l);
	    cout << l;
	    tam1++;
	}

	


	cout << "\n\nCom cast (não):\n";

	while (! texto2.estaVazia()) {
	    texto2.desempilhar(l);
	    cout << (char) l;
	    tam1++;
	}
	cout << "\n";
	
	while (texto2.desempilhar(l)) {
	    tam2++;
	}
	
	cout << "tam 01: " << tam1 << "\ntam 02: " << tam2;

}
