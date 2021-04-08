#include <iostream>
using namespace std;

int main() {
    short unsigned int diferenca;
    short unsigned  int numMaior = 1000;
    short unsigned  int numMenor = 300;
    cout << "\nnumMaior = "
        << numMaior
        << ", numMenor = "
        << numMenor
        << "\n"; 
    diferenca = numMaior - numMenor;
    cout << "\nnumMaior - numMenor = "
        << diferenca
        << "\n";
    diferenca = numMenor - numMaior;
    cout << "\nnumMenor - numMaior = "
        << diferenca
        << "\n";
    return 0;
}
