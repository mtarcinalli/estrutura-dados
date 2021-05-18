#include <iostream>
using namespace std;

struct Pilha {
  int topo;
  int capacidade;
  float *prox;
};

void criarPilha(struct Pilha *p, int c) {
  p->topo = -1;
  p->capacidade = c - 1;
  p->prox = (float*) malloc (c * sizeof(float));
}

void destroiPilha(struct Pilha *p) {
    free(p);
}

int estaVazia(struct Pilha *p) {
  if (p->topo == -1) {
    return 1;
  } else {
    return 0;
  }
}

int estaCheia(struct Pilha *p) {
  if (p->topo == p->capacidade) {
    return 1;
  } else {
    return 0;
  }
}

void empilhar(struct Pilha *p, float v) {
  p->topo++;
  p->prox[p->topo] = v;
}

float desempilhar(struct Pilha *p) {
  float aux = p->prox[p->topo];
  p->topo--;
  return aux;
}

int retornaTopo(struct Pilha *p) {
  return p->prox [p->topo];
}

int main() {
  struct Pilha minhaPilha;
  int capacidade, op;
  float valor;

  cout << "Capacidade da pilha: ";
  cin >> capacidade;
  criarPilha(&minhaPilha, capacidade);

  do {
    cout << "\nOpções:\n";
    cout << "1 - empilhar (push)\n";
    cout << "2 - desempilhar (pop)\n";
    cout << "3 - mostrar topo\n";
    cout << "4 - redefinir pilha\n";
    cout << "5 - sair\n";
    cin >> op;

    switch(op) {
      case 1:
        if (estaCheia(&minhaPilha) == 1) {
          cout << "\nPilha cheia!!!\n";
        } else {
          cout << "Valor:\n";
          cin >> valor;
          empilhar(&minhaPilha, valor);
        }
        break;
      case 2:
        if (estaVazia(&minhaPilha) == 1) {
          cout << "\nPilha vazia!!!\n";
        } else {
          valor = desempilhar(&minhaPilha);
          cout << "Valor desempilhado: " << valor << "\n";
        }
        break;
      case 3:
        if (estaVazia(&minhaPilha) == 1) {
          cout << "\nPilha vazia!!!\n";
        } else {
          valor = retornaTopo(&minhaPilha);
          cout << "Valor topo: " << valor << "\n";
        }
        break;
      case 4:
          cout << "Destruindo a pilha\n\n";
          destroiPilha(&minhaPilha);
        
          cout << "Redefinindo a pilha\n";
          cout << "Capacidade da pilha: ";
          cin >> capacidade;
          criarPilha(&minhaPilha, capacidade);
        
    }
  } while (op != 5);
}
