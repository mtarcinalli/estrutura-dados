#include <iostream>
using namespace std;

int num(int b);
int aGlobal = 4;
#define MAX 4

int main() {
    int a = 3;
    int b = 1;
    int c = 2;
    cout << "Max:" << MAX << "\n";
    cout << "aGlobal: " << aGlobal << "\n";
    cout << "a main: " << a << "\n";
    cout << "b main: " << b << "\n";
    cout << "c main: " << c << "\n";
    c = num(4);
    cout << "aGlobal: " << aGlobal << "\n";
    cout << "a main: " << a << "\n";
    cout << "b main: " << b << "\n";
    cout << "c main: " << c << "\n";
    return 0;
}

int num(int b) {
    int a = 5;
    cout << "\n---inicio função---\n";
    cout << "a na função: " << a << "\n";
    cout << "b na função: " << b << "\n";
    cout << "aGlobal na função: " << aGlobal << "\n";
    aGlobal++;
    b++;
    cout << "b na função pós incremento: " << b << "\n";
    cout << "---fim função---\n\n";
    return b;
}
