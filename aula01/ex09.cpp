#include <iostream>
int main() {
    unsigned short int usVar;
    usVar = 65535;
    std::cout << "Valor inicial = "
        << usVar 
        << "\n";
    usVar = usVar + 1;
    std::cout << "Somando 1 = "
        << usVar 
        << "\n";
    usVar = usVar + 1;
    std::cout << "Somando mais 1 = "
        << usVar 
        << "\n";
    return 0;
}
