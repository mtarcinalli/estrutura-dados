#include <iostream>
using namespace std;

void func1(int y) {
  y++;
  cout << "valor de y em func1:\t" << y << "\n";
  cout << "endereço y: \t" << &y << "\n\n";
}

void func3(int *py) {
    
}

void func2(int *py) {
  (*py)++;
  cout << "valor de py em func2:\t" << *py << "\n";
  cout << "endereço py:\t" << py << "\n\n";
}

int main() {
    int y;
    int *py;

    y = 3;
    cout << "y = 3\n";
    cout << "valor de y em main: \t" << y << "\n";
    cout << "endereço y: \t" << &y << "\n\n";

    py = &y;
    cout << "py = &y;\n";
    cout << "valor de py em main: \t" << *py << "\n";
    cout << "endereço py: \t" << py << "\n\n";

    *py = 2;
    cout << "*py = 2;\n";
    cout << "valor de py em main: \t" << *py << "\n";
    cout << "endereço py: \t" << py << "\n\n";

    cout << "valor de y em main: \t" << y << "\n";
    cout << "endereço y: \t" << &y << "\n\n";

    cout << "func1(y);\n";
    func1(y);
    cout << "valor de y em main: \t" << y << "\n";
    cout << "endereço y: \t" << &y << "\n\n";

    cout << "func2(&y);\n";
    func2(&y);
    cout << "valor de y em main: \t" << y << "\n";
    cout << "endereço y: \t" << &y << "\n\n";

    cout << "func2(&y);\n";
    func2(&y);
    cout << "valor de y em main: \t" << y << "\n";
    cout << "endereço y: \t" << &y << "\n\n";
    cout << "valor de py em main: \t" << *py << "\n";
    cout << "endereço py: \t" << py << "\n\n";
}
