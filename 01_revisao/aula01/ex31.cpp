#include <iostream>
using namespace std;

int main() {   
    struct Pessoa {
      string nome;
      int idade;
      float salario;
    };    

    int j = 0;
    Pessoa pessoas[3];
    
    pessoas[0].nome = "Bob Wilson";
    pessoas[0].idade = 33;
    pessoas[0].salario = 890.50;
    j++;

    pessoas[1].nome = "Patrick Donald";
    pessoas[1].idade = 37;
    pessoas[1].salario = 900.70;
    j++;

    pessoas[2].nome = "Lula Mouse";
    pessoas[2].idade = 43;
    pessoas[2].salario = 1890.50;
    j++;

    for (int i = 0 ; i < j ; i++){
        cout << "Nome: " << pessoas[i].nome << "\n";
        cout << "Idade: " << pessoas[i].idade << "\n";
        cout << "Salario: " << pessoas[i].salario << "\n\n";
    }
}
