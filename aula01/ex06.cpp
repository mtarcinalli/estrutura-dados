#include <iostream>
int main() {
    std::cout << "*** Tamanhos das variaveis ***\n";
    std::cout << "Tamanho de char =\t"
        << sizeof(char)
        << " bytes.\n";
    std::cout << "Tamanho de int =\t"
        << sizeof(int) 
        << " bytes.\n";
    std::cout << "Tamanho de float =\t"
        << sizeof(float)
        << " bytes.\n";
    std::cout << "Tamanho de double =\t"
        << sizeof(double)
        << " bytes.\n";
    std::cout << "Tamanho de bool =\t"
        << sizeof(bool)
        << " bytes.\n";
    return 0;
}
