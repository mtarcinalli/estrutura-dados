#include <iostream>
using namespace std;

int main(int argc, char *argv[ ]) {
    int a;
    a = atoi(argv[1]);
    
    if ((a > 10) && (a < 20)) {
        cout << "a: " << a << " maior que 10 e menor que 20!\n";
    } 

    if ((a <= 10) || (a >= 20)) {
        cout << "a: " << a << " menor que 10 ou maior que 20!\n";
    } 
    
    if (! (a == 11) ) {
        cout << "a: " << a << " diferente de 11!\n";
    }

    if (a != 11) {
        cout << "a: " << a << " diferente de 11!\n";
    }
    
    return 0;
}
