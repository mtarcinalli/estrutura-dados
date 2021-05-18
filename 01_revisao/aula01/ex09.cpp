#include <iostream>
using namespace std;

int main() {
    unsigned short int usVar;
    usVar = 65535;
    cout << "Valor inicial = " << usVar << "\n";
    usVar = usVar + 1;
    cout << "Somando 1 = " << usVar << "\n";
    usVar = usVar + 1;
    cout << "Somando mais 1 = " << usVar << "\n";
    return 0;
}
