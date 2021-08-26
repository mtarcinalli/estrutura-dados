#include <iostream>
using namespace std;

int main() {
    string nome;
    int idade;
    float salario;
    
    string nomeBob, nomePatrick;
    int idadeBob, idadePatrick;
    float salarioBob, salarioPatrick;
    
    struct Pessoa {
      string nome;
      int idade;
      float salario;
    };    
    
    Pessoa bob;
    Pessoa patrick;
    
    bob.nome = "Bob Wilson";
    bob.idade = 33;
    bob.salario = 890.50;
    
    patrick.nome = "Patrick Estrela";
    
    cout << "Nome: " << bob.nome << "\n";
    cout << "Idade: " << bob.idade << "\n";
    cout << "Salario: " << bob.salario << "\n";
}
