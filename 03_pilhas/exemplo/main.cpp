#include <iostream>
#include <cstdlib>
//#include "pilha.h"
#include "Pilha.cpp"


using namespace std;




int main() {
	Pilha minhaPilha(2);
	
	if (minhaPilha.estaVazia())
		cout << "Esta vazia!\n";
	else
		cout << "Não esta vazia!\n";

	cout << "Empilhando: 4\n";		
	if (minhaPilha.empilhar(4))
		cout << "Empilhado\n";
	else
		cout << "Não empilhou\n";

	cout << "Empilhando: 3\n";		
	if (minhaPilha.empilhar(3))
		cout << "Empilhado\n";
	else
		cout << "Não empilhou\n";

	cout << "Empilhando: 2\n";		
	if (minhaPilha.empilhar(2))
		cout << "Empilhado\n";
	else
		cout << "Não empilhou\n";

	cout << "Empilhando: 1\n";		
	if (minhaPilha.empilhar(2))
		cout << "Empilhado\n";
	else
		cout << "Não empilhou\n";

	cout << "Topo da pilha: " << minhaPilha.retornaTopo() << "\n";

	cout << "Topo da pilha: " << minhaPilha.desempilhar() << "\n";
	cout << "Topo da pilha: " << minhaPilha.desempilhar() << "\n";
	cout << "Topo da pilha: " << minhaPilha.desempilhar() << "\n";
	
	minhaPilha.redefinir(3);
	
	cout << "Empilhando: 4\n";		
	if (minhaPilha.empilhar(4))
		cout << "Empilhado\n";
	else
		cout << "Não empilhou\n";

	cout << "Empilhando: 3\n";		
	if (minhaPilha.empilhar(3))
		cout << "Empilhado\n";
	else
		cout << "Não empilhou\n";

	cout << "Empilhando: 2\n";		
	if (minhaPilha.empilhar(2))
		cout << "Empilhado\n";
	else
		cout << "Não empilhou\n";

	cout << "Empilhando: 1\n";		
	if (minhaPilha.empilhar(2))
		cout << "Empilhado\n";
	else
		cout << "Não empilhou\n";

	cout << "Topo da pilha: " << minhaPilha.retornaTopo() << "\n";

	cout << "Topo da pilha: " << minhaPilha.desempilhar() << "\n";
	cout << "Topo da pilha: " << minhaPilha.desempilhar() << "\n";
	cout << "Topo da pilha: " << minhaPilha.desempilhar() << "\n";


}
