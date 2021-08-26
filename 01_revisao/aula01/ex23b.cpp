#include <iostream>
using namespace std;

int main() {
    int a;
    do {
        cout << "Digite um valor para a (igual ou maior que 10): ";
        cin >> a;
        cout << "\na = " << a << "\n";
    } while(a < 10);
    cout << "\n\nValor final: a = " << a;
    return 0;
}
