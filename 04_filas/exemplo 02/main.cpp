#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;


#include "Fila.cpp"

//  Implemente uma fila que gerencie uma fila de processos. 
//  Cada processo deve ter um id único e sequencial, o comando a ser 
//  executado, o usuário, o tempo estimado de execução e a quantidade 
//  de memória necessária.

// Implementar métodos que:

// - liste a fila de processos;
// - mostre o total de tempo estimado para concluir 
//     a atual fila de processos


int main() {
	int y, auxPid;
	string auxComando = "dir /s";
	string auxUsuario = "usr01"; 
	int auxTempo = 10; 
	int auxMemoria = 5;
	string saida;
	
	Fila minhaFila;
	minhaFila.inserir(auxComando, auxUsuario, auxTempo, auxMemoria);
	
	auxComando = "ps ax";
	auxUsuario = "usr02";
	auxTempo = 20;
	auxMemoria = 15;
	minhaFila.inserir(auxComando, auxUsuario, auxTempo, auxMemoria);
	
	saida = minhaFila.listar();
	cout << saida;
	
	cout << "\n\nlistar novamente:\n\n";
	saida = minhaFila.listar();	
	cout << saida;	
	
	
	//minhaFila.remover(auxPid, auxComando, auxUsuario, auxTempo, auxMemoria);
	//cout << "pid: " << auxPid << "\n";
	//cout << "cmd: " << auxComando << "\n";
	//cout << "usr: " << auxUsuario << "\n";
	//cout << "tmp: " << auxTempo << "\n";
	//cout << "mem: " << auxMemoria << "\n";
	
	//minhaFila.remover(auxPid, auxComando, auxUsuario, auxTempo, auxMemoria);
	///cout << "pid: " << auxPid << "\n";
	//cout << "cmd: " << auxComando << "\n";
	//cout << "usr: " << auxUsuario << "\n";
	//cout << "tmp: " << auxTempo << "\n";
	//cout << "mem: " << auxMemoria << "\n";

}
