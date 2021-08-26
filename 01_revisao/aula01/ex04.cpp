#include <iostream>
using namespace std;

int main() {
    char charVar;
    int intVar = 298;
    float floatVar = 49.95;
    double doubleVar = 99.9999;
    bool boolVar = (2 > 3);
    
    charVar = 't';
    
    cout << "charVar = " 
        << charVar 
        << "\n";
    cout << "intVar = " 
        << intVar 
        << "\n";
    cout << "floatVar = " 
        << floatVar 
        << "\n";
    cout << "doubleVar = " 
        << doubleVar 
        << "\n";
    cout << "boolVar = " 
        << boolVar 
        << "\n";
    return 0;
}
