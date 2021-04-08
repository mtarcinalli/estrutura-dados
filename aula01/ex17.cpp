#include <iostream>
using namespace std;

int main(int argc, char *argv[ ]) {
    int a;
    a = atoi(argv[1]);
    
    if (a > 10) {
        cout << "a: " << a << " maior que 10!\n";
    } else {
        cout << "a: " << a <<  " menor que 10!\n";
        if (a > 5) {
            cout << "a: " << a << " maior que 5\n";
        }
    }
    cout << "\n";
    
    
    return 0;
}
