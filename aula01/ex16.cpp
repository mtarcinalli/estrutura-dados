#include <iostream>
using namespace std;

int main() {
    int a,b,x, y;
    a = b = 10;
    x = a++;
    y = ++b;
    cout << "a: " 
        << a 
        << "\nb: "
        << b 
        << "\nx: "
        << x 
        << "\ny: "
        << y;
    cout << "\n\nDecremento:\n";
    x = a--;
    y = --b;
    cout << "a: " 
        << a 
        << "\nb: "
        << b 
        << "\nx: "
        << x 
        << "\ny: "
        << y;
    return 0;
}
