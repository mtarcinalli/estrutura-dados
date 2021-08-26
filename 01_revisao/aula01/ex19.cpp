#include <iostream>
using namespace std;

int main(int argc, char *argv[ ]) {
    int a;
    string resultado;

    a = atoi(argv[1]);
    resultado = (a > 10) ? ("maior") : ("menor");
    cout << "a: " << a << " resultado: " << resultado << "\n\n";
    return 0;
}
