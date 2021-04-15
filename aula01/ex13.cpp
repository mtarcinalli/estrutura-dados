#include <iostream>
using namespace std;

int Soma(int i, int j) {
    cout << "Estamos na funcao Soma().\n";
    cout << "Valores recebidos: \n";
    cout << "i = "
        << i
        << ", j = "
        << j
        << "\n";
    return (i + j);
}

int main() {
    cout << "Estamos em main()\n";
    int x, y, z;
    cout << "\nDigite o primeiro num. + <Enter>";
    cin >> x;
    cout << "\nDigite o segundo num. + <Enter>";
    cin >> y; 
    cout << "Chamando funcao Soma()...\n";
    z = Soma(x, y);
    cout << "Voltamos a main()\n";
    cout << "Novo valor de z = "
        << z
        << "\n";
    return 0;
} // Fim de main()
