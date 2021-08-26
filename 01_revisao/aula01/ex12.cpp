#include <iostream>
using namespace std;


int digaAlo(string nome, int &idade, float salario);

int main() {
    string nomeBob;
    int idadeBob, idadePatrick;
    float salarioBob, salarioPatrick=0;
    
    cout << "Digite o nome da pessoa:";
    nomeBob = "Bob"; //cin >> nomeBob;
    
    cout << "\nIdade:";
    idadeBob = 77; //cin >> idadeBob;
    
    cout << "\nSalario:";
    salarioBob = 77.5; //cin >> salarioBob;

    
    cout << "\n---Main--\n";
    cout << "nome: " << nomeBob << "\n";
    cout << "idade: " << idadeBob << "\n";
    cout << "salario: " << salarioBob << "\n";
    cout << "---Main--\n";
    
    digaAlo(nomeBob, idadeBob, salarioBob);
    
    cout << "\n---Main--\n";
    cout << "nome: " << nomeBob << "\n";
    cout << "idade: " << idadeBob << "\n";
    cout << "salario: " << salarioBob << "\n";
    cout << "---Main--\n";
    
    idadePatrick = 12;
    salarioPatrick = 15;
    cout << "\n---Main--\n";
    cout << "idadePatrick: " << idadePatrick << "\n";
    cout << "salarioPatrick: " << salarioPatrick << "\n";
    cout << "---Main--\n";

    // digaAlo("Patrick", 12 , 669.43); --> não pode
    salarioPatrick = digaAlo("Patrick", idadePatrick, 669.43);

    cout << "\n---Main--\n";
    cout << "idadePatrick: " << idadePatrick << "\n";
    cout << "salarioPatrick: " << salarioPatrick << "\n";
    cout << "---Main--\n";
    
    return 0;
}

int digaAlo(string nome, int &idade, float salario) {
    cout << "\n---DigaAlo--\n";
    cout << "nome: " << nome << "\n";
    idade = 8;
    salario = 1000;
    cout << "idade: " << idade << "\n";
    cout << "salario: " << salario << "\n";
    cout << "---DigaAlo--\n";
    return 500;
}
