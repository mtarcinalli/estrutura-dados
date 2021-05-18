#include <iostream>
using namespace std;

int main() {
    cout << "*** Tamanhos das variaveis ***\n";
    cout << "Tamanho de char =\t"
        << sizeof(char)
        << " bytes.\n";
    cout << "Tamanho de int =\t"
        << sizeof(int) 
        << " bytes.\n";
    cout << "Tamanho de float =\t"
        << sizeof(float)
        << " bytes.\n";
    cout << "Tamanho de double =\t"
        << sizeof(double)
        << " bytes.\n";
    cout << "Tamanho de bool =\t"
        << sizeof(bool)
        << " bytes.\n";
    return 0;
}
