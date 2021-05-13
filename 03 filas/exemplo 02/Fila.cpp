#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
    contPid = 0;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}


bool Fila::inserir(string auxComando, string auxUsuario, int auxTempo, int auxMemoria) {	
    PonteiroElemento p;
    p = new elemento;

    p->pid = contPid;
    contPid++;
    
    p->comando = auxComando;
    p->usuario = auxUsuario;
    p->tempo = auxTempo;
    p->memoria = auxMemoria;

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

bool Fila::remover(int &auxPid, string &auxComando, string &auxUsuario, int &auxTempo, int &auxMemoria) {
    PonteiroElemento p;
    if (vazia())
        return false;
        
    auxPid = inicio->pid;
    auxComando = inicio->comando;
    auxUsuario = inicio->usuario;
    auxTempo = inicio->tempo;
    auxMemoria = inicio->memoria;
    
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}

string Fila::listar() {
	int auxPid;
	string auxComando;
	string auxUsuario;
	int auxTempo;
	int auxMemoria;
	Fila auxFila;
	string output;
	
	output = "";
	while (remover(auxPid, auxComando, auxUsuario, auxTempo, auxMemoria)) {
		output = output + "pid: " + to_string(auxPid) + "\n";
		output = output + "cmd: " + auxComando + "\n";
		output = output + "usr: " + auxUsuario + "\n";
		output = output + "tmp: " + to_string(auxTempo) + "\n";
		output = output + "mem: " + to_string(auxMemoria) + "\n";
		output = output + "---\n";
		auxFila.inserir(auxComando, auxUsuario, auxTempo, auxMemoria);
	}
	contPid = 0;
	
	while (auxFila.remover(auxPid, auxComando, auxUsuario, auxTempo, auxMemoria)) {
		inserir(auxComando, auxUsuario, auxTempo, auxMemoria);
	}
		
	return output;
}

