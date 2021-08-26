#include <iostream>
using namespace std;

int main() {
    int vetor[7];
    int i;

    // primeiro elemento
    vetor[0] = 2;
    // segundo elemento
    vetor[1] = 4;
    // último elemento
    vetor[6] = 4;

    // zerando todo o vetor
    for (i = 0 ; i < 7 ; i++) 
        vetor[i] = 0;
    
    for (i = 0 ; i < 7 ; i++) {
        vetor[i] = i * 3;
    }
    
    for(i = 0; i < 7; i++) {
        cout << "\nValor do elemento vetor["
            << i
            << "] = "
            << vetor[i];
    }
    
    cout << "\n";

    // equivalente ao foreach de outras linguagens
    for (auto elemento: vetor) {
        cout << elemento << "\n";
    }
    
    return 0;
}
