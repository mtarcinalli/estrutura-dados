#include <iostream>
using namespace std;

int main() {
    int intArray[7];
    int i;

    for (i = 0; i < 7; i++) {
        intArray[i] = i * 3;
    }
    
    for(i = 0; i < 7; i++) {
        cout << "\nValor de intArray["
            << i
            << "] = "
            << intArray[i];
    }
    return 0;
}
