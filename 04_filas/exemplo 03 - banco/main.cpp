#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

#include "Fila.cpp"

// fila de banco
// inserir nomes pessoas
// chamar cliente (remove da fila)
// manter historico dos ultimos 10 clientes atendidos
// listar a fila
// implementar uma fila preferencial
// a cada 3 chamadas da fila principal deve ser chamado
// alguém da fila preferencial

int main() {
    char sair;
    int opMenu;
    string nome;
    int conta;
    int contPref = 0;
    Fila principal;
    Fila preferencial;
    Fila historico;
    do {
        system("clear");
        cout << "1 para inserir cliente\n";
        cout << "2 para inserir cliente preferencial\n";
        cout << "3 para listar fila principal\n";
        cout << "4 para listar fila preferencial\n";
        cout << "5 para chamar cliente da fila\n";
        cout << "6 para mostrar historico\n\n";
        cin >> opMenu;
        switch (opMenu) {
        case 1:
            cout << "\nDigite nome do cliente:\n";
            // cin: não permite digitação de espaços em branco
            // ao digitar espaço encerra a leitura do teclado
            //cin >> nome;

            //getline(cin, nome);
            // nessa situação o getline conflita com o cin anterior
            // ele age como se o usuário já tivesse digitado o nome
            // do cliente e ignora a digitação.
            // o problema está relacionado ao buffer do teclado
            // é como se "sobrasse" um enter da entrada anterior

            getline(cin >> ws, nome);
            // com essa sintaxe cin >> ws) o getline
            // faz uma limpeza desse buffer do teclado
            // eliminando esse enter "a mais" e fazendo
            // com que a leitura da string seja realizada
            // da maneira que desejamos

            cout << "\nDigite conta do cliente:\n";
            cin >> conta;
            principal.inserir(nome, conta);
            break;
        case 2:
            cout << "\nDigite nome do cliente preferencial:\n";
            getline(cin >> ws, nome);
            cout << "\nDigite conta do cliente:\n";
            cin >> conta;
            preferencial.inserir(nome, conta);
            break;
        case 3:
            cout << "\nFila Principal:\n";
            cout << principal.listar() << "\n\n";
            break;
        case 4:
            cout << "\nFila Preferencial:\n";
            cout << preferencial.listar() << "\n\n";
            break;
        case 5:
            cout << "\nChamando cliente:\n";
            contPref++;
            if (contPref <= 3 and principal.vazia() == false) {
                cout <<"\nRemovendo da fila principal:\n";
                if (principal.remover(nome, conta)) {
                    cout << "\nNome: " << nome << " - Conta: " << conta << "\n";
                    historico.inserir(nome, conta);
                    if (historico.tamanho() > 10) {
                        historico.remover(nome, conta);
                    }
                } else {
                    cout << "\nFila vazia!!!\n";
                }
            } else {
                cout <<"\nRemovendo da fila preferencial:\n";
                if (preferencial.remover(nome, conta)) {
                    cout << "\nNome: " << nome << " - Conta: " << conta << "\n";
                    historico.inserir(nome, conta);
                    if (historico.tamanho() > 10) {
                        historico.remover(nome, conta);
                    }
                } else {
                    cout << "\nFila vazia!!!\n";
                }
                contPref = 0;
            }

            break;
        case 6:
            cout << "\nHistórico de clientes:\n";
            cout << historico.listar() << "\n\n";
            break;
        default:
            cout << "\nOpção Inválida!!\n";
            break;
        }
        cout << "\nDeseja sair? (s/n)\n";
        cin >> sair;
    } while (sair != 's');

}