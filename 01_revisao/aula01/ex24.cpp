#include <iostream>
using namespace std;

int main() {
    int contador;

    contador = 0;
    while (contador <= 10) {
        cout << "Contador (while) = " << contador << endl;
        contador++;
    }
    cout << "\n---\n";
    
    for (contador = 0 ; contador <= 10 ; contador++) {
        cout << "Contador (for) = " << contador << endl;
    }
    return 0;
}
