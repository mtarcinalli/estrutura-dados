#include <iostream>
using namespace std;

int main() {
    int larg = 7, compr;
    compr = 8;
    int area = larg * compr;
    area = area + 1;
    cout << "*** Valores finais ***\n";
    cout << "Largura = "
        << larg << "\n";
    cout << "Comprimento = "
        << compr << "\n";
    cout << "Area = "
        << area << "\n";
    return 0;
}
