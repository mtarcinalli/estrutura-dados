#include <iostream>
using namespace std;

int main() { 
    int contador = 0;
    while(true) {
         contador++;
         if (contador > 20)
             break;
         if (contador > 10)
             continue;
         cout << "Contador = " << contador << "\n";         
    }
    cout << "\n\nValor final = " << contador;    
    return 0;
}
