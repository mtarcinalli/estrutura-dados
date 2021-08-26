#include <iostream>
using namespace std;

// passagem de parametro por valor
// o que acontece no parametro na função fica na função
void func1(int yp) {
  yp++;
  cout << "y em func1:\t" << yp << "\n";
}

// passagem de parametro por referencia
// o que acontece no parametro na função é retornado pelo parametro
void func2(int &yp) {
  yp++;
  cout << "y em func2:\t" << yp << "\n";
}

int main() {
    int y = 3;
    cout << "y em main: \t" << y << "\n";

    func1(y);
    cout << "y em main: \t" << y << "\n\n";

    func2(y);
    cout << "y em main: \t" << y << "\n";

    return 0;
}
